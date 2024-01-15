void __fastcall BattleBuffData___ctor(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_List_int__o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x2
  struct System_Int32_array *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  BattleBuffData_SkillRankChangeData_o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7

  if ( (byte_40FD3B7 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&BattleBuffData_SkillRankChangeData_TypeInfo, v10);
    byte_40FD3B7 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.passiveList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.passiveList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.activeList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.activeList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.conditionalAuraBuff = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.conditionalAuraBuff,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v40,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.auraBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.auraBuffList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.addBuffOrder = 1;
  v55 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v51,
                                                    v52,
                                                    v53,
                                                    v54);
  System_Collections_Generic_List_int____ctor(
    v55,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.unfixedBuffList = v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.unfixedBuffList,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v62,
                                                                                                  v63,
                                                                                                  v64,
                                                                                                  v65);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.classIconAuraEffectBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v66;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classIconAuraEffectBuffList,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v73,
                                                                                                  v74,
                                                                                                  v75,
                                                                                                  v76);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.updateWaitIntervalBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v77;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.updateWaitIntervalBuffList,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v85 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v84);
  this->fields.wkzero = v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v96 = (BattleBuffData_SkillRankChangeData_o *)sub_B170CC(
                                                  BattleBuffData_SkillRankChangeData_TypeInfo,
                                                  v92,
                                                  v93,
                                                  v94,
                                                  v95);
  BattleBuffData_SkillRankChangeData___ctor(v96, this, 0LL);
  this->fields.skillChangeData = v96;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillChangeData,
    (System_Int32_array **)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
}


void __fastcall BattleBuffData__AddEffectBuffList(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v7; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *classIconAuraEffectBuffList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v9; // x0

  if ( (byte_40FD3FD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v5);
    byte_40FD3FD = 1;
  }
  if ( !buff )
    goto LABEL_15;
  if ( buff->fields.auraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
    if ( !auraBuffList )
      goto LABEL_15;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            auraBuffList,
            (WarBoardManager_TaskList_o *)buff,
            (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      v7 = this->fields.auraBuffList;
      if ( !v7 )
        goto LABEL_15;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  if ( !buff->fields.classIconAuraEffectId )
    return;
  classIconAuraEffectBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.classIconAuraEffectBuffList;
  if ( !classIconAuraEffectBuffList )
LABEL_15:
    sub_B170D4();
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          classIconAuraEffectBuffList,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    v9 = this->fields.classIconAuraEffectBuffList;
    if ( v9 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x21

  if ( (byte_40FD3E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, buffArray);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B16FFC(&Method_BattleBuffData__AddForceBuff_b__87_0__, v9);
    byte_40FD3E1 = 1;
  }
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               buffArray,
                                                                               method,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleBuffData__AddForceBuff_b__87_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v10,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__AddGetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *addBuffList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  BattleBuffData___c_c *v23; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__209_0; // x21
  Il2CppObject *v26; // x22
  struct BattleBuffData___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v42; // x20
  BattleBuffData___c_c *v43; // x0
  struct BattleBuffData___c_StaticFields *v44; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__209_1; // x21
  Il2CppObject *v46; // x22
  struct BattleBuffData___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  BattleBuffData___c_c *v58; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  struct BattleBuffData___c_StaticFields *v60; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__209_2; // x21
  Il2CppObject *v62; // x22
  struct BattleBuffData___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  BattleBuffData___c_c *v74; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v75; // x19
  struct BattleBuffData___c_StaticFields *v76; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__209_3; // x20
  Il2CppObject *v78; // x21
  struct BattleBuffData___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD434 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, addBuffList);
    sub_B16FFC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v12);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v17);
    sub_B16FFC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_0__, v18);
    sub_B16FFC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_1__, v19);
    sub_B16FFC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_2__, v20);
    sub_B16FFC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_3__, v21);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v22);
    byte_40FD434 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  if ( !addBuffList )
    goto LABEL_58;
  if ( addBuffList->fields._size < 1 )
  {
    v34 = 0;
  }
  else
  {
    v23 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v23 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__209_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__209_0;
    if ( !_9__209_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__209_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    addBuffList,
                                                                                    method,
                                                                                    v3,
                                                                                    v4);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__209_0,
        v26,
        Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v27 = BattleBuffData___c_TypeInfo->static_fields;
      v27->__9__209_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__209_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v27->__9__209_0,
        (System_Int32_array **)_9__209_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)addBuffList,
            (System_Func_TSource__int__o *)_9__209_0,
            (const MethodInfo_19BCDAC *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  BattleBuffData__UpdateBuffAddOrder(this, v34, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v86,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)addBuffList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v87 = v86;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v87,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v87.fields.current;
    if ( !v87.fields.current )
      sub_B170D4();
    if ( LODWORD(v87.fields.current[4].klass) )
    {
      auraBuffList = this->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)auraBuffList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v87.fields.current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
    if ( BYTE1(current[2].klass) )
    {
      passiveList = this->fields.passiveList;
      if ( !passiveList )
        sub_B170D4();
    }
    else
    {
      passiveList = this->fields.activeList;
      if ( !passiveList )
        sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)passiveList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v87,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v42 = this->fields.passiveList;
  v43 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v43 = BattleBuffData___c_TypeInfo;
  }
  v44 = v43->static_fields;
  _9__209_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v44->__9__209_1;
  if ( !_9__209_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v44 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__209_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                            v38,
                                                                            v39,
                                                                            v40,
                                                                            v41);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__209_1,
      v46,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v47 = BattleBuffData___c_TypeInfo->static_fields;
    v47->__9__209_1 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__209_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v47->__9__209_1,
      (System_Int32_array **)_9__209_1,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v42 )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__209_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  v58 = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v58 = BattleBuffData___c_TypeInfo;
  }
  v60 = v58->static_fields;
  _9__209_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v60->__9__209_2;
  if ( !_9__209_2 )
  {
    if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v60 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v60->__9;
    _9__209_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                            v54,
                                                                            v55,
                                                                            v56,
                                                                            v57);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__209_2,
      v62,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_2__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v63 = BattleBuffData___c_TypeInfo->static_fields;
    v63->__9__209_2 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__209_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v63->__9__209_2,
      (System_Int32_array **)_9__209_2,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !activeList )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)activeList,
    (System_Comparison_T__o *)_9__209_2,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  v74 = BattleBuffData___c_TypeInfo;
  v75 = this->fields.auraBuffList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v74 = BattleBuffData___c_TypeInfo;
  }
  v76 = v74->static_fields;
  _9__209_3 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v76->__9__209_3;
  if ( !_9__209_3 )
  {
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v76 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)v76->__9;
    _9__209_3 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                            v70,
                                                                            v71,
                                                                            v72,
                                                                            v73);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__209_3,
      v78,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__209_3__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v79 = BattleBuffData___c_TypeInfo->static_fields;
    v79->__9__209_3 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__209_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v79->__9__209_3,
      (System_Int32_array **)_9__209_3,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  if ( !v75 )
LABEL_58:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v75,
    (System_Comparison_T__o *)_9__209_3,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
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

  if ( (byte_40FD3B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    byte_40FD3B4 = 1;
  }
  updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updateWaitIntervalBuffList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FD446 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData__AllBuffEnumerable_d__236_TypeInfo, method);
    byte_40FD446 = 1;
  }
  v6 = sub_B170CC(BattleBuffData__AllBuffEnumerable_d__236_TypeInfo, method, v2, v3, v4);
  BattleBuffData__AllBuffEnumerable_d__236___ctor((BattleBuffData__AllBuffEnumerable_d__236_o *)v6, -2, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD448 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData__AllBuffValidEnumerable_d__238_TypeInfo, isCheckInterval);
    byte_40FD448 = 1;
  }
  v7 = sub_B170CC(BattleBuffData__AllBuffValidEnumerable_d__238_TypeInfo, isCheckInterval, method, v3, v4);
  BattleBuffData__AllBuffValidEnumerable_d__238___ctor((BattleBuffData__AllBuffValidEnumerable_d__238_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v7 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD447 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_TypeInfo, isCheckInterval);
    byte_40FD447 = 1;
  }
  v7 = sub_B170CC(BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_TypeInfo, isCheckInterval, method, v3, v4);
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__237___ctor(
    (BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *)v7,
    -2,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v7 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v7;
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD431 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, buff);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v8);
    byte_40FD431 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !*dataList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*dataList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v10.fields.current;
    if ( !v10.fields.current )
      sub_B170D4();
    if ( !buff )
      sub_B170D4();
    if ( LODWORD(v10.fields.current[4].klass) == buff->fields.auraEffectId
      && LODWORD(v10.fields.current[1].klass) == buff->fields.buffId )
    {
      LODWORD(v10.fields.current[9].klass) = buff->fields.state;
      HIDWORD(current[8].monitor) = buff->fields.addOrder;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__BoardTurnProgressing(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v29; // x21
  BattleBuffData___c_c *v30; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__67_0; // x22
  Il2CppObject *v33; // x23
  struct BattleBuffData___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x2
  int v51; // w21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  BattleBuffData___c_c *v56; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v57; // x21
  struct BattleBuffData___c_StaticFields *v58; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__67_1; // x22
  Il2CppObject *v60; // x23
  struct BattleBuffData___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_T__o *v68; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v74; // x22
  const MethodInfo *v75; // x3
  System_Collections_Generic_IEnumerable_T__o *v76; // x0
  const MethodInfo *v77; // x2
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+8h] [xbp-98h] BYREF
  int v80[2]; // [xsp+20h] [xbp-80h]
  int v81; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FD3D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleBuffData_checkBuffClear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v16);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v17);
    sub_B16FFC(&Method_BattleBuffData___c__BoardTurnProgressing_b__67_0__, v18);
    sub_B16FFC(&Method_BattleBuffData___c__BoardTurnProgressing_b__67_1__, v19);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v20);
    byte_40FD3D0 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v81 = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v79,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v82 = v79;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v23 )
      break;
    if ( !v82.fields.current )
      sub_B170D4();
    if ( LOBYTE(v82.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v23, (BattleBuffData_BuffData_o *)v82.fields.current, v24);
  }
  v80[0] = 68;
  v81 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v81 = 0;
  v29 = this->fields.passiveList;
  v30 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v30 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__67_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v25,
                                                                          v26,
                                                                          v27,
                                                                          v28);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__67_0,
      v33,
      Method_BattleBuffData___c__BoardTurnProgressing_b__67_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v34 = BattleBuffData___c_TypeInfo->static_fields;
    v34->__9__67_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__67_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v29 )
    goto LABEL_42;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v29,
                                                         (System_Predicate_T__o *)_9__67_0,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v21 )
    goto LABEL_42;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    All,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v42 = this->fields.passiveList;
  v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v43,
                                                                   v44,
                                                                   v45,
                                                                   v46);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v47,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v42 )
    goto LABEL_42;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v42,
    (System_Predicate_T__o *)v47,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v79,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v82 = v79;
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v49 )
      break;
    if ( !v82.fields.current )
      sub_B170D4();
    if ( LOBYTE(v82.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v49, (BattleBuffData_BuffData_o *)v82.fields.current, v50);
  }
  v80[0] = 205;
  v51 = ++v81;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v51 && v80[v51 - 1] == 205 )
    v81 = v51 - 1;
  v56 = BattleBuffData___c_TypeInfo;
  v57 = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v56 = BattleBuffData___c_TypeInfo;
  }
  v58 = v56->static_fields;
  _9__67_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v58->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v58 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)v58->__9;
    _9__67_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v52,
                                                                          v53,
                                                                          v54,
                                                                          v55);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__67_1,
      v60,
      Method_BattleBuffData___c__BoardTurnProgressing_b__67_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v61 = BattleBuffData___c_TypeInfo->static_fields;
    v61->__9__67_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__67_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  if ( !v57
    || (v68 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v57,
                                                               (System_Predicate_T__o *)_9__67_1,
                                                               (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
          v68,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__),
        v69 = this->fields.activeList,
        v74 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v70,
                                                                         v71,
                                                                         v72,
                                                                         v73),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v74,
          (Il2CppObject *)this,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v69) )
  {
LABEL_42:
    sub_B170D4();
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v69,
    (System_Predicate_T__o *)v74,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v76 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v21,
                                                         0,
                                                         v75);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    v76,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v21,
    v77);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v54; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_40FD407 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&now);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v16);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass143_0__ChangeBuffState_b__0__, v17);
    sub_B16FFC(&BattleBuffData___c__DisplayClass143_0_TypeInfo, v18);
    byte_40FD407 = 1;
  }
  v19 = sub_B170CC(
          BattleBuffData___c__DisplayClass143_0_TypeInfo,
          *(_QWORD *)&now,
          *(_QWORD *)&max,
          servantIndv,
          buffIndv);
  BattleBuffData___c__DisplayClass143_0___ctor((BattleBuffData___c__DisplayClass143_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_7;
  *(_QWORD *)(v19 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v19 + 24) = now;
  *(_DWORD *)(v19 + 28) = max;
  *(_QWORD *)(v19 + 32) = servantIndv;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v19 + 32),
    (System_Int32_array **)servantIndv,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *(_QWORD *)(v19 + 40) = buffIndv;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 40), (System_Int32_array **)buffIndv, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v19 + 48) = fieldIndiv;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v19 + 48),
    (System_Int32_array **)fieldIndiv,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  *(_QWORD *)(v19 + 56) = canSubStateBuffIndv;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v19 + 56),
    (System_Int32_array **)canSubStateBuffIndv,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  *(_BYTE *)(v19 + 64) = 0;
  v54 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v50,
                                                                               v51,
                                                                               v52,
                                                                               v53);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v54,
    (Il2CppObject *)v19,
    Method_BattleBuffData___c__DisplayClass143_0__ChangeBuffState_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v54,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.activeList) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)v54,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  return *(_BYTE *)(v19 + 64);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__CheckAndGetFixedBuffArray(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkBuffArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  _BOOL8 IsUnfix; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  unsigned __int64 v15; // x23
  BattleBuffData_BuffData_o *v16; // x22

  if ( (byte_40FD438 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, checkBuffArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    byte_40FD438 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  checkBuffArray,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkBuffArray )
    goto LABEL_14;
  v14 = *(_QWORD *)&checkBuffArray->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
        sub_B17100(IsUnfix, v12, v13);
        sub_B170A0();
      }
      v16 = checkBuffArray->m_Items[v15];
      IsUnfix = BattleBuffData__IsUnfix(this, v16, v13);
      if ( !IsUnfix )
      {
        if ( !v10 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v14) = checkBuffArray->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
  if ( !v10 )
LABEL_14:
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  __int64 v18; // x3
  __int64 v19; // x4
  BuffEntity_o *v20; // x0
  int v21; // w22
  WarEntity_o *Entity; // x8
  int32_t v23; // w21
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD3B2 & 1) == 0 )
  {
    sub_B16FFC(&BuffEntity_TypeInfo, buffList);
    sub_B16FFC(&BuffList_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD3B2 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  v20 = (BuffEntity_o *)sub_B170CC(BuffEntity_TypeInfo, v16, v17, v18, v19);
  BuffEntity___ctor(v20, 0LL);
  if ( !buffList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v25 = v24;
  v21 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !v25.fields.current )
      sub_B170D4();
    if ( !BYTE2(v25.fields.current[23].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)v25.fields.current[1].klass,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        v23 = *(&Entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v21 |= BuffList__CheckType(133, v23, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v21 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_21:
    sub_B170D4();
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
  System_Func_int__bool__o **v18; // x22
  const MethodInfo *v19; // x1
  Il2CppObject *current; // x23
  BuffMaster_o *buffMst; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
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

  if ( (byte_40FD3E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, buffList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v12);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass91_0__CheckBuffGroup_b__0__, v15);
    sub_B16FFC(&BattleBuffData___c__DisplayClass91_0_TypeInfo, v16);
    byte_40FD3E4 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v17 = sub_B170CC(
          BattleBuffData___c__DisplayClass91_0_TypeInfo,
          buffList,
          *(_QWORD *)&groupId,
          *(_QWORD *)&attachTarget,
          method);
  BattleBuffData___c__DisplayClass91_0___ctor((BattleBuffData___c__DisplayClass91_0_o *)v17, 0LL);
  if ( !v17 || (*(_DWORD *)(v17 + 16) = attachTarget, !buffList) )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v39 = v38;
  v18 = (System_Func_int__bool__o **)(v17 + 24);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v39.fields.current;
    if ( !v39.fields.current )
      sub_B170D4();
    if ( !BYTE2(v39.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v19);
      if ( !buffMst )
        sub_B170D4();
      if ( BuffMaster__GetBuffGroup(buffMst, (int32_t)current[1].klass, -1, 0LL) == groupId )
      {
        monitor = (System_Int32_array *)current[13].monitor;
        if ( monitor )
        {
          v27 = *v18;
          if ( !*v18 )
          {
            v27 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v22, v23, v24, v25);
            System_Func_int__bool____ctor(
              v27,
              (Il2CppObject *)v17,
              Method_BattleBuffData___c__DisplayClass91_0__CheckBuffGroup_b__0__,
              (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
            *v18 = v27;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v17 + 24),
              (System_Int32_array **)v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
          }
          if ( BasicHelper__Any_int__25910576(
                 monitor,
                 (System_Func_T__bool__o *)v27,
                 (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  il2cpp_array_size_t v16; // w8
  BuffList_TYPE_array *v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x3
  int v21; // w8
  __int64 v22; // x23
  unsigned int v23; // w25
  bool v24; // w27
  __int64 v25; // x28
  __int64 v26; // x8
  BattleBuffData_BuffData_o **v27; // x28
  __int64 v28; // t1
  const MethodInfo *v29; // x3
  System_Int32_array *Individualty; // x0
  System_Int32_array *v31; // x24
  BattleBuffData_o *UpBuffRateBuffIndivList; // x0
  const MethodInfo *v33; // x5
  int32_t v34; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FD411 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, buffData);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&BuffList_TYPE___TypeInfo, v12);
    byte_40FD411 = 1;
  }
  entity = 0LL;
  *value = 0;
  *maxBuffRate = upperParam;
  BuffList = sub_B17014(int___TypeInfo, 2LL, value);
  if ( !BuffList )
    goto LABEL_41;
  v16 = *(_DWORD *)(BuffList + 24);
  v17 = (BuffList_TYPE_array *)BuffList;
  if ( !v16 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 32) = 162;
  if ( v16 == 1 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 36) = 161;
  if ( !BattleBuffData__CheckBuffType(this, (System_Int32_array *)BuffList, buffData, v15) )
  {
    BuffList = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v18);
    if ( BuffList )
    {
      v17 = (BuffList_TYPE_array *)BuffList;
      if ( !*(_DWORD *)(BuffList + 24) )
        goto LABEL_42;
      *(_DWORD *)(BuffList + 32) = 162;
      BuffList = (__int64)BattleBuffData__GetBuffList(this, (BuffList_TYPE_array *)BuffList, 0LL, 0, v19);
      if ( BuffList )
      {
        v21 = *(_DWORD *)(BuffList + 24);
        v22 = BuffList;
        if ( v21 >= 1 )
        {
          v23 = 0;
          v24 = 0;
          while ( v23 < v21 )
          {
            v25 = v22 + 8LL * (int)v23;
            v28 = *(_QWORD *)(v25 + 32);
            v27 = (BattleBuffData_BuffData_o **)(v25 + 32);
            v26 = v28;
            if ( !v28 )
              goto LABEL_41;
            v17 = *(BuffList_TYPE_array **)(v26 + 256);
            if ( v17 )
            {
              if ( *(_QWORD *)&v17->max_length )
              {
                BuffList = BattleBuffData__CheckBuffType(this, (System_Int32_array *)v17, buffData, v20);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v23 >= *(_DWORD *)(v22 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v27, 1, v29);
                  if ( (BuffList & 1) != 0 )
                    goto LABEL_30;
                }
              }
            }
            entity = 0LL;
            BuffList = (__int64)BattleBuffData__get_buffMst(this, (const MethodInfo *)v17);
            if ( v23 >= *(_DWORD *)(v22 + 24) )
              break;
            if ( !*v27 || !BuffList )
              goto LABEL_41;
            BuffList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)BuffList,
                         &entity,
                         (*v27)->fields.buffId,
                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
            if ( (BuffList & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_41;
              BuffList = (__int64)BuffEntity__GetUpBuffRateBuffIndivList((BuffEntity_o *)entity, 0LL);
              if ( BuffList )
              {
                if ( !buffData )
                  goto LABEL_41;
                Individualty = BattleBuffData_BuffData__GetIndividualty(buffData, 0, 0, 0, 0LL);
                if ( !entity )
                  goto LABEL_41;
                v31 = Individualty;
                UpBuffRateBuffIndivList = (BattleBuffData_o *)BuffEntity__GetUpBuffRateBuffIndivList(
                                                                (BuffEntity_o *)entity,
                                                                0LL);
                BuffList = BattleBuffData__checkBuffTypeIndiviuality(
                             UpBuffRateBuffIndivList,
                             v31,
                             (System_Int32_array *)UpBuffRateBuffIndivList,
                             (BuffEntity_o *)entity,
                             0LL,
                             v33);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v23 >= *(_DWORD *)(v22 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v27, 1, v20);
                  if ( (BuffList & 1) != 0 )
                  {
LABEL_30:
                    if ( v23 >= *(_DWORD *)(v22 + 24) )
                      break;
                    if ( !*v27 )
                      goto LABEL_41;
                    *value += (*v27)->fields.param;
                    if ( v23 >= *(_DWORD *)(v22 + 24) )
                      break;
                    if ( !*v27 )
                      goto LABEL_41;
                    v34 = (*v27)->fields.maxBuffRate;
                    v24 = 1;
                    if ( *maxBuffRate >= v34 )
                      v34 = *maxBuffRate;
                    *maxBuffRate = v34;
                  }
                }
              }
            }
            v21 = *(_DWORD *)(v22 + 24);
            if ( (int)++v23 >= v21 )
              return v24;
          }
LABEL_42:
          sub_B17100(BuffList, v17, v14);
          sub_B170A0();
        }
        return 0;
      }
    }
LABEL_41:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckBuffType(
        BattleBuffData_o *this,
        System_Int32_array *types,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  const MethodInfo *v14; // x1
  BuffMaster_o *buffMst; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Func_int__bool__o *v20; // x20

  if ( (byte_40FD422 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, types);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v9);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v10);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass185_0__CheckBuffType_b__0__, v11);
    sub_B16FFC(&BattleBuffData___c__DisplayClass185_0_TypeInfo, v12);
    byte_40FD422 = 1;
  }
  v13 = sub_B170CC(BattleBuffData___c__DisplayClass185_0_TypeInfo, types, buffData, method, v4);
  BattleBuffData___c__DisplayClass185_0___ctor((BattleBuffData___c__DisplayClass185_0_o *)v13, 0LL);
  if ( !buffData )
    goto LABEL_10;
  if ( buffData->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, v14);
  if ( !v13 || !buffMst )
LABEL_10:
    sub_B170D4();
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
         (WarEntity_o **)(v13 + 16),
         buffData->fields.buffId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    v20 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v16, v17, v18, v19);
    System_Func_int__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_BattleBuffData___c__DisplayClass185_0__CheckBuffType_b__0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    return BasicHelper__Any_int__25910576(
             types,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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
    sub_B170D4();
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
  const MethodInfo *v34; // x3
  bool v35; // w20
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  const MethodInfo *v41; // [xsp+0h] [xbp-80h]
  int v42; // [xsp+10h] [xbp-70h]
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40FD450 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, selfIndiv);
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_40FD450 = 1;
  }
  plusMinus = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  plusMinus = 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(38, 0LL, 0LL);
  v17 = BattleBuffData__AllBuffValidEnumerable(this, 0, v16);
  if ( !v17 )
    sub_B170D4();
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
    p_method = sub_AAFEF8(v17, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v19,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_B170D4();
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
      v27 = sub_AAFEF8(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v31 = sub_AAFEF8(v23, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v32 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v33 = v32;
    if ( !v32 )
      sub_B170D4();
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v32, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v33,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v33, 0LL) || v33->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v33, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v33, 0LL)) )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B170D4();
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             v33->fields.buffId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_B170D4();
        if ( BuffEntity__IsDisableForciblyAddState((BuffEntity_o *)entity, 0LL)
          && BattleBuffData__checkIndiviuality_31052280(
               this,
               ActInfo,
               v33,
               selfIndiv,
               opponentIndiv,
               0LL,
               0LL,
               &plusMinus,
               v41)
          && BattleBuffData__checkBuffSuccessful(this, v33, 0, v34) )
        {
          v42 = 178;
          v35 = 1;
          goto LABEL_45;
        }
      }
    }
  }
  v35 = 0;
  v42 = 176;
LABEL_45:
  v36 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v37 = 0LL;
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_49;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_49:
    v39 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  if ( v42 == 176 )
    return 0;
  return v35;
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

  if ( (byte_40FD3C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__, reList);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__, v5);
    byte_40FD3C3 = 1;
  }
  if ( !reList )
LABEL_32:
    sub_B170D4();
  size = reList->fields._size;
  if ( size - 1 >= 0 )
  {
    v7 = size - 1;
    while ( 1 )
    {
      if ( (__int64)v7 < size )
      {
        if ( v7 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  items = reList->fields._items;
                  v13 = items->m_Items[i];
                  if ( !v13 )
                    goto LABEL_32;
                  if ( v13->fields.isRemove )
                  {
                    if ( v7 >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    v14 = items->m_Items[v7];
                    if ( !v14 )
                      goto LABEL_32;
                    if ( i >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    v15 = items->m_Items[i];
                    if ( !v15 )
                      goto LABEL_32;
                    if ( v14->fields.addOrder == v15->fields.addOrder )
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)reList,
                        i,
                        (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  bool v16; // w21
  Il2CppObject *current; // x22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD3E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, tvals);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v14);
    byte_40FD3E7 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  tvals,
                                                                                                  isIncludeIgnoreIndiv,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !svtDataList )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtDataList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v21 = v20;
  v16 = isIncludeIgnoreIndiv;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B170D4();
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             (BattleServantData_o *)v21.fields.current,
                                             0LL,
                                             v16,
                                             0,
                                             0,
                                             0LL);
    if ( Individuality__CheckSignedIndividualities(ConcatServantAndBuffIndividualityies, tvals, 0LL) )
    {
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v15 )
LABEL_14:
    sub_B170D4();
  return (BattleServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
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
  System_Int32_array *InvalidSacrificeIndividualities; // x0
  System_Int32_array *v9; // x20
  bool v10; // w21
  System_Int32_array *Individualty; // x0
  struct BuffMaster_o *s_buffMst; // x0
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  struct BattleBuffData_StaticFields *static_fields; // x8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t v21; // w21
  __int64 v22; // x2
  int32_t v23; // w21
  System_Int32_array *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = buffData;
  if ( (byte_40FD44E & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, method);
    sub_B16FFC(&BuffList_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v6);
    buffData = (BattleBuffData_BuffData_o *)sub_B16FFC(&int___TypeInfo, v7);
    byte_40FD44E = 1;
  }
  entity = 0LL;
  InvalidSacrificeIndividualities = BattleBuffData__GetInvalidSacrificeIndividualities((const MethodInfo *)buffData);
  if ( !v2 )
    goto LABEL_27;
  v9 = InvalidSacrificeIndividualities;
  v10 = 1;
  Individualty = BattleBuffData_BuffData__GetIndividualty(v2, 1, 0, 0, 0LL);
  if ( !Individuality__CheckIndividualities(Individualty, v9, 0LL) )
  {
    s_buffMst = BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( s_buffMst )
      goto LABEL_11;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
    static_fields = BattleBuffData_TypeInfo->static_fields;
    static_fields->s_buffMst = (struct BuffMaster_o *)Master_WarQuestSelectionMaster;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->s_buffMst,
      Master_WarQuestSelectionMaster,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    s_buffMst = BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( s_buffMst )
    {
LABEL_11:
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)s_buffMst,
              &entity,
              v2->fields.buffId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
        return 0;
      if ( entity )
      {
        v21 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( !BuffList__CheckType(40, v21, 0LL) )
        {
          if ( !entity )
            goto LABEL_27;
          v23 = *(&entity->fields.id + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( !BuffList__CheckType(41, v23, 0LL) )
            return 0;
        }
        v24 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v22);
        if ( v24 )
        {
          if ( !v24->max_length )
          {
            sub_B17100(v24, v25, v26);
            sub_B170A0();
          }
          v24->m_Items[1] = v2->fields.param;
          return Individuality__CheckIndividualities(v24, v9, 0LL);
        }
      }
    }
LABEL_27:
    sub_B170D4();
  }
  return v10;
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndivArray(
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffDataList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  char v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD44F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v5);
    byte_40FD44F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !buffDataList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffDataList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v32; // x24
  BattleBuffData___c_c *v33; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__66_0; // x25
  Il2CppObject *v36; // x26
  struct BattleBuffData___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v45; // x24
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x25
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  struct BattleData_o *v52; // x8
  struct BaseBattleEvent_o *v53; // x0
  int v54; // w22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v59; // x22
  BattleBuffData___c_c *v60; // x0
  struct BattleBuffData___c_StaticFields *v61; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__66_1; // x23
  Il2CppObject *v63; // x24
  struct BattleBuffData___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_IEnumerable_T__o *v71; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v77; // x23
  const MethodInfo *v78; // x3
  System_Collections_Generic_IEnumerable_T__o *v79; // x0
  const MethodInfo *v80; // x2
  BattleBuffData_o *v81; // x0
  const MethodInfo *v82; // x3
  const MethodInfo *v83; // x1
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+8h] [xbp-98h] BYREF
  int v86[2]; // [xsp+20h] [xbp-80h]
  int v87; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FD3CF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleBuffData_checkBuffClear__, logic);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v19);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v20);
    sub_B16FFC(&Method_BattleBuffData___c__CommonTurnProgressing_b__66_0__, v21);
    sub_B16FFC(&Method_BattleBuffData___c__CommonTurnProgressing_b__66_1__, v22);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v23);
    byte_40FD3CF = 1;
  }
  memset(&i, 0, sizeof(i));
  v87 = 0;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  logic,
                                                                                                  isEndEnemyTurn,
                                                                                                  *(_QWORD *)&defCondState,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v85;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._32_ProgressBuffTurn.method)(
          battleEvent,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          battleEvent->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    if ( !logic )
      sub_B170D4();
    data = logic->fields.data;
    if ( !data )
      sub_B170D4();
    battleEvent = data->fields.battleEvent;
    if ( !battleEvent )
      sub_B170D4();
  }
  v86[0] = 73;
  v87 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v87 = 0;
  v32 = this->fields.passiveList;
  v33 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v33 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__66_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__66_0;
  if ( !_9__66_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__66_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v28,
                                                                          v29,
                                                                          v30,
                                                                          v31);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__66_0,
      v36,
      Method_BattleBuffData___c__CommonTurnProgressing_b__66_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v37 = BattleBuffData___c_TypeInfo->static_fields;
    v37->__9__66_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__66_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v37->__9__66_0,
      (System_Int32_array **)_9__66_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !v32 )
    goto LABEL_51;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v32,
                                                         (System_Predicate_T__o *)_9__66_0,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v24 )
    goto LABEL_51;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    All,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v45 = this->fields.passiveList;
  v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v46,
                                                                   v47,
                                                                   v48,
                                                                   v49);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v50,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v45 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v45,
    (System_Predicate_T__o *)v50,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v85;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))v53->klass->vtable._32_ProgressBuffTurn.method)(
          v53,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          v53->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    if ( !logic )
      sub_B170D4();
    v52 = logic->fields.data;
    if ( !v52 )
      sub_B170D4();
    v53 = v52->fields.battleEvent;
    if ( !v53 )
      sub_B170D4();
  }
  v86[0] = 214;
  v54 = ++v87;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v54 && v86[v54 - 1] == 214 )
    v87 = v54 - 1;
  v59 = this->fields.activeList;
  v60 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v60 = BattleBuffData___c_TypeInfo;
  }
  v61 = v60->static_fields;
  _9__66_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v61->__9__66_1;
  if ( !_9__66_1 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v61 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)v61->__9;
    _9__66_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v55,
                                                                          v56,
                                                                          v57,
                                                                          v58);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__66_1,
      v63,
      Method_BattleBuffData___c__CommonTurnProgressing_b__66_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v64 = BattleBuffData___c_TypeInfo->static_fields;
    v64->__9__66_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__66_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v64->__9__66_1,
      (System_Int32_array **)_9__66_1,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  if ( !v59 )
    goto LABEL_51;
  v71 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v59,
                                                         (System_Predicate_T__o *)_9__66_1,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    v71,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v72 = this->fields.activeList;
  v77 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v73,
                                                                   v74,
                                                                   v75,
                                                                   v76);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v77,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v72 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v72,
    (System_Predicate_T__o *)v77,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v79 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
                                                         0,
                                                         v78);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    v79,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
    v80);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v81,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
    logic,
    v82);
  if ( BattleBuffData__CheckInvalidSacrificeIndivArray(
         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
         v83) )
  {
    if ( logic )
    {
      BattleLogic__updateFieldBuff(logic, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_51:
    sub_B170D4();
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__CreateDummyBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t addOrder; // w8
  System_Int32_array **intervalData; // x1

  if ( (byte_40FD3F1 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_BuffData_TypeInfo, buff);
    byte_40FD3F1 = 1;
  }
  v6 = sub_B170CC(BattleBuffData_BuffData_TypeInfo, buff, method, v3, v4);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v6, 0LL);
  if ( !buff || !v6 )
    sub_B170D4();
  addOrder = buff->fields.addOrder;
  *(_BYTE *)(v6 + 370) = 1;
  *(_DWORD *)(v6 + 140) = addOrder;
  *(_DWORD *)(v6 + 372) = buff->fields.buffId;
  *(_BYTE *)(v6 + 33) = buff->fields.passive;
  *(_DWORD *)(v6 + 144) = buff->fields.state;
  intervalData = (System_Int32_array **)buff->fields.intervalData;
  *(_QWORD *)(v6 + 360) = intervalData;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 360), intervalData, v7, v8, v9, v10, v11, v12);
  return (BattleBuffData_BuffData_o *)v6;
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__DebugGetShowServantParamAll(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o **v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_40FD3C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v10);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass44_0__DebugGetShowServantParamAll_b__0__, v11);
    sub_B16FFC(&BattleBuffData___c__DisplayClass44_0_TypeInfo, v12);
    byte_40FD3C7 = 1;
  }
  v13 = sub_B170CC(BattleBuffData___c__DisplayClass44_0_TypeInfo, method, v2, v3, v4);
  BattleBuffData___c__DisplayClass44_0___ctor((BattleBuffData___c__DisplayClass44_0_o *)v13, 0LL);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = v18;
  v25 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o **)(v13 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v26,
                                                                               v27,
                                                                               v28,
                                                                               v29);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v30,
    (Il2CppObject *)v13,
    Method_BattleBuffData___c__DisplayClass44_0__DebugGetShowServantParamAll_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v30,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)v30,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        !*v25) )
  {
LABEL_8:
    sub_B170D4();
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                *v25,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


void __fastcall BattleBuffData__DelForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x21

  if ( (byte_40FD3E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, buffArray);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B16FFC(&Method_BattleBuffData__DelForceBuff_b__88_0__, v9);
    byte_40FD3E2 = 1;
  }
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               buffArray,
                                                                               method,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleBuffData__DelForceBuff_b__88_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v10,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__DeleteDummyBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v6; // w20
  __int64 v7; // x21
  __int64 v8; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v9; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x23
  int32_t v11; // w20
  __int64 v12; // x21
  __int64 v13; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v14; // x0

  if ( (byte_40FD43B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_40FD43B = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_26;
  v6 = activeList->fields._size - 1;
  if ( v6 >= 0 )
  {
    v7 = 8LL * v6 + 32;
    do
    {
      if ( activeList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v8 = *(__int64 *)((char *)&activeList->fields._items->obj.klass + v7);
      if ( !v8 )
        break;
      if ( *(_BYTE *)(v8 + 370) )
      {
        v9 = this->fields.activeList;
        if ( !v9 )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v9,
          v6,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v6 < 0 )
        goto LABEL_15;
      activeList = this->fields.activeList;
      v7 -= 8LL;
    }
    while ( activeList );
LABEL_26:
    sub_B170D4();
  }
LABEL_15:
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_26;
  v11 = passiveList->fields._size - 1;
  if ( v11 >= 0 )
  {
    v12 = 8LL * v11 + 32;
    while ( 1 )
    {
      if ( passiveList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = *(__int64 *)((char *)&passiveList->fields._items->obj.klass + v12);
      if ( !v13 )
        goto LABEL_26;
      if ( *(_BYTE *)(v13 + 370) )
      {
        v14 = this->fields.passiveList;
        if ( !v14 )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v14,
          v11,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v11 < 0 )
        return;
      passiveList = this->fields.passiveList;
      v12 -= 8LL;
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
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *updateWaitIntervalBuffList; // x20
  BattleBuffData___c_c *v13; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__27_0; // x21
  Il2CppObject *v16; // x22
  struct BattleBuffData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v24; // x0

  if ( (byte_40FD3B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v5);
    sub_B16FFC(&Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__27_0__, v6);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v7);
    byte_40FD3B6 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
    v13 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v13 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__27_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                        v8,
                                                                                        v9,
                                                                                        v10,
                                                                                        v11);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__27_0,
        v16,
        Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__27_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      v17 = BattleBuffData___c_TypeInfo->static_fields;
      v17->__9__27_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__27_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v17->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( !updateWaitIntervalBuffList
      || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)updateWaitIntervalBuffList,
            (System_Action_T__o *)_9__27_0,
            (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
          (v24 = this->fields.updateWaitIntervalBuffList) == 0LL) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v24,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__ExistsTargetIntervalBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20

  if ( (byte_40FD44B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleBuffData_BuffData____66805912, *(_QWORD *)&targetType);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass241_0__ExistsTargetIntervalBuff_b__0__, v9);
    sub_B16FFC(&BattleBuffData___c__DisplayClass241_0_TypeInfo, v10);
    byte_40FD44B = 1;
  }
  v11 = sub_B170CC(BattleBuffData___c__DisplayClass241_0_TypeInfo, *(_QWORD *)&targetType, method, v3, v4);
  BattleBuffData___c__DisplayClass241_0___ctor((BattleBuffData___c__DisplayClass241_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = targetType;
  AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(this, v18);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v20,
                                                                             v21,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_BattleBuffData___c__DisplayClass241_0__ExistsTargetIntervalBuff_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)AllIntervalBuffArray,
           (System_Func_T__bool__o *)v24,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_BattleBuffData_BuffData____66805912);
}


BattleBuffData_ActValueResponse_o *__fastcall BattleBuffData__GetActValueDetail(
        BattleBuffData_o *this,
        BattleBuffData_ActValueRequest_o *actValueRequest,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  struct BattleBuffData_CheckIndividualitiesData_o *CheckIndividualitiesData_k__BackingField; // x8
  BuffList_ActInfo_o *v7; // x21
  int32_t CalculationParam; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  int32_t baseParam; // w9
  int32_t v14; // w20
  int32_t v15; // w21
  System_String_o *v16; // x22
  int32_t v17; // w23
  BattleBuffData_ActValueResponse_o *v18; // x24
  const MethodInfo *v20; // [xsp+18h] [xbp-58h]
  int32_t lowerParam; // [xsp+2Ch] [xbp-44h] BYREF
  System_String_o *missText; // [xsp+30h] [xbp-40h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_40FD40E & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_ActValueResponse_TypeInfo, actValueRequest);
    byte_40FD40E = 1;
  }
  upperParam = 0;
  missText = 0LL;
  lowerParam = 0;
  if ( !actValueRequest
    || (ActInfo = BattleBuffData_ActValueRequest__get_ActInfo(actValueRequest, 0LL),
        (CheckIndividualitiesData_k__BackingField = actValueRequest->fields._CheckIndividualitiesData_k__BackingField) == 0LL)
    || (v7 = ActInfo,
        CalculationParam = BattleBuffData__getCalculationParam(
                             this,
                             ActInfo,
                             CheckIndividualitiesData_k__BackingField->fields._selfConcatSvtIndividualities_k__BackingField,
                             actValueRequest->fields._BuffIf_k__BackingField,
                             CheckIndividualitiesData_k__BackingField->fields._opponentConcatSvtIndividualities_k__BackingField,
                             &upperParam,
                             &this->fields.wkflg,
                             &missText,
                             &lowerParam,
                             actValueRequest->fields._CheckIndividualitiesData_k__BackingField,
                             0LL,
                             v20),
        !v7) )
  {
    sub_B170D4();
  }
  baseParam = v7->fields.baseParam;
  v14 = upperParam;
  v15 = lowerParam;
  v16 = missText;
  v17 = CalculationParam - baseParam;
  v18 = (BattleBuffData_ActValueResponse_o *)sub_B170CC(BattleBuffData_ActValueResponse_TypeInfo, v9, v10, v11, v12);
  BattleBuffData_ActValueResponse___ctor(v18, actValueRequest, v17, v14, v15, v16, 0LL);
  return v18;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandAssistBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v11; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__199_0; // x20
  Il2CppObject *v14; // x21
  struct BattleBuffData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FD42D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v6);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_BattleBuffData___c__GetAllCommandAssistBuff_b__199_0__, v8);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v9);
    byte_40FD42D = 1;
  }
  passiveList = this->fields.passiveList;
  v11 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v11 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__199_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__199_0;
  if ( !_9__199_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__199_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__199_0,
      v14,
      Method_BattleBuffData___c__GetAllCommandAssistBuff_b__199_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v15 = BattleBuffData___c_TypeInfo->static_fields;
    v15->__9__199_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__199_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__199_0,
      (System_Int32_array **)_9__199_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !passiveList )
    sub_B170D4();
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__199_0,
                                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandCodeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v11; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__198_0; // x20
  Il2CppObject *v14; // x21
  struct BattleBuffData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FD42C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v6);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_BattleBuffData___c__GetAllCommandCodeBuff_b__198_0__, v8);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v9);
    byte_40FD42C = 1;
  }
  passiveList = this->fields.passiveList;
  v11 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v11 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__198_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__198_0;
  if ( !_9__198_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__198_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__198_0,
      v14,
      Method_BattleBuffData___c__GetAllCommandCodeBuff_b__198_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v15 = BattleBuffData___c_TypeInfo->static_fields;
    v15->__9__198_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__198_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__198_0,
      (System_Int32_array **)_9__198_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !passiveList )
    sub_B170D4();
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__198_0,
                                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllConnectedCommandCardBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  BattleBuffData___c_c *v21; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__226_0; // x22
  Il2CppObject *v24; // x23
  BattleServantConfConponent_o *p__9__226_0; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  BattleBuffData___c_c *v37; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x20
  struct BattleBuffData___c_StaticFields *v39; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__226_1; // x21
  Il2CppObject *v41; // x22
  BattleServantConfConponent_o *p__9__226_1; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerable_T__o *v49; // x0

  if ( (byte_40FD43F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__226_0__, v12);
    sub_B16FFC(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__226_1__, v13);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v14);
    byte_40FD43F = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  v21 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v21 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__226_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__226_0;
  if ( !_9__226_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__226_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v16,
                                                                           v17,
                                                                           v18,
                                                                           v19);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__226_0,
      v24,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__226_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__226_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__226_0;
    p__9__226_0->klass = (BattleServantConfConponent_c *)_9__226_0;
    sub_B16F98(p__9__226_0, (System_Int32_array **)_9__226_0, v26, v27, v28, v29, v30, v31);
  }
  if ( !activeList )
    goto LABEL_23;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__226_0,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v15 )
    goto LABEL_23;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    All,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v37 = BattleBuffData___c_TypeInfo;
  passiveList = this->fields.passiveList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v37 = BattleBuffData___c_TypeInfo;
  }
  v39 = v37->static_fields;
  _9__226_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v39->__9__226_1;
  if ( !_9__226_1 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v39 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)v39->__9;
    _9__226_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v33,
                                                                           v34,
                                                                           v35,
                                                                           v36);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__226_1,
      v41,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__226_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__226_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__226_1;
    p__9__226_1->klass = (BattleServantConfConponent_c *)_9__226_1;
    sub_B16F98(p__9__226_1, (System_Int32_array **)_9__226_1, v43, v44, v45, v46, v47, v48);
  }
  if ( !passiveList )
LABEL_23:
    sub_B170D4();
  v49 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                         (System_Predicate_T__o *)_9__226_1,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    v49,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  BattleBuffData___c_c *v13; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__240_0; // x20
  Il2CppObject *v16; // x21
  BattleServantConfConponent_o *p__9__240_0; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_40FD44A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v3);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v4);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_B16FFC(&Method_BattleBuffData___c__GetAllIntervalBuffArray_b__240_0__, v6);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v7);
    byte_40FD44A = 1;
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(this, method);
  v13 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v13 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__240_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__240_0;
  if ( !_9__240_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__240_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                     v8,
                                                                                     v9,
                                                                                     v10,
                                                                                     v11);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__240_0,
      v16,
      Method_BattleBuffData___c__GetAllIntervalBuffArray_b__240_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__240_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__240_0;
    p__9__240_0->klass = (BattleServantConfConponent_c *)_9__240_0;
    sub_B16F98(p__9__240_0, (System_Int32_array **)_9__240_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v12,
          (System_Func_TSource__bool__o *)_9__240_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v24,
                                            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAvaliableActiveBuffArray(
        BattleBuffData_o *this,
        System_Predicate_BattleBuffData_BuffData__o *conditionsToAdd,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__101_0; // x20
  BattleBuffData___c_c *v27; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  Il2CppObject *v29; // x21
  struct BattleBuffData___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40FD3E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, conditionsToAdd);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__101_0__, v10);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass101_0__GetAvaliableActiveBuffArray_b__1__, v11);
    sub_B16FFC(&BattleBuffData___c__DisplayClass101_0_TypeInfo, v12);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v13);
    byte_40FD3E9 = 1;
  }
  v14 = sub_B170CC(BattleBuffData___c__DisplayClass101_0_TypeInfo, conditionsToAdd, method, v3, v4);
  BattleBuffData___c__DisplayClass101_0___ctor((BattleBuffData___c__DisplayClass101_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 16) = conditionsToAdd;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)conditionsToAdd,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  activeList = this->fields.activeList;
  if ( !*(_QWORD *)(v14 + 16) )
  {
    v27 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v27 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__101_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__101_0;
    if ( !_9__101_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__101_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                             v21,
                                                                             v22,
                                                                             v23,
                                                                             v24);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__101_0,
        v29,
        Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__101_0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v30 = BattleBuffData___c_TypeInfo->static_fields;
      v30->__9__101_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__101_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v30->__9__101_0,
        (System_Int32_array **)_9__101_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    if ( activeList )
      goto LABEL_16;
LABEL_18:
    sub_B170D4();
  }
  _9__101_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v21,
                                                                         v22,
                                                                         v23,
                                                                         v24);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    _9__101_0,
    (Il2CppObject *)v14,
    Method_BattleBuffData___c__DisplayClass101_0__GetAvaliableActiveBuffArray_b__1__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !activeList )
    goto LABEL_18;
LABEL_16:
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__101_0,
          (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_18;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0

  if ( (byte_40FD41C & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_40FD41C = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&act,
                                                    selfArray,
                                                    opArray,
                                                    isRec);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v21 = BattleBuffData__AllBuffValidEnumerable(this, 1, v20);
  if ( !v21 )
    sub_B170D4();
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
    p_method = sub_AAFEF8(v21, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v23,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_B170D4();
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
      v32 = sub_AAFEF8(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v36 = sub_AAFEF8(v27, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v37 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v27, *(_QWORD *)(v36 + 8));
    v38 = v37;
    if ( !v37 )
      sub_B170D4();
    if ( !v37->fields._isRemove
      && BattleBuffData_BuffData__CheckCond_22054196(v37, this, ActInfo, selfArray, opArray, v28, 0LL)
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v38->fields.generalParams, 0LL) )
    {
      if ( !v18 )
        sub_B170D4();
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)v38->fields.generalParams,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  v39 = *(_QWORD *)v27;
  if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
  {
    v40 = 0LL;
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
        goto LABEL_38;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_38:
    v42 = sub_AAFEF8(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v27, *(_QWORD *)(v42 + 8));
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

  if ( (byte_40FD3F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, types);
    byte_40FD3F2 = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                                              this,
                                                              isExcludeInterval,
                                                              (const MethodInfo *)checkIndividuality);
  v10 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v9,
                                           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  return BattleBuffData__getBuffList_31020028(this, types, checkIndividuality, v10, v11);
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
  int32_t RevengeTargetUniqueId; // w0
  BattleServantData_o *ServantData; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BattleBuffData_CheckIndividualitiesData_o *v17; // x24
  const MethodInfo *v18; // x5

  if ( (byte_40FD41F & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&act);
    byte_40FD41F = 1;
  }
  if ( !svtData || (RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(svtData, 0LL), !data) )
    sub_B170D4();
  ServantData = BattleData__getServantData(data, RevengeTargetUniqueId, 0LL);
  v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
  BattleBuffData_CheckIndividualitiesData___ctor(v17, svtData, ServantData, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_31040328(this, act, v17, isRec, 0, v18);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetClassIconEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *classIconAuraEffectBuffList; // x19
  BattleBuffData___c_c *v11; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__250_0; // x20
  Il2CppObject *v14; // x21
  BattleServantConfConponent_o *p__9__250_0; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FD452 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v6);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_BattleBuffData___c__GetClassIconEffectBuffList_b__250_0__, v8);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v9);
    byte_40FD452 = 1;
  }
  classIconAuraEffectBuffList = this->fields.classIconAuraEffectBuffList;
  v11 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v11 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__250_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__250_0;
  if ( !_9__250_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__250_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__250_0,
      v14,
      Method_BattleBuffData___c__GetClassIconEffectBuffList_b__250_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__250_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__250_0;
    p__9__250_0->klass = (BattleServantConfConponent_c *)_9__250_0;
    sub_B16F98(p__9__250_0, (System_Int32_array **)_9__250_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !classIconAuraEffectBuffList )
    sub_B170D4();
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)classIconAuraEffectBuffList,
                                                                         (System_Predicate_T__o *)_9__250_0,
                                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCommandCardBuffArray(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        int32_t targetBuffType,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v21; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v22; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v24; // x20
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x20
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x25
  const MethodInfo *v38; // x4
  int32_t v39; // w26
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FD43D & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, commandData);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FD43D = 1;
  }
  entity = 0LL;
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  commandData,
                                                                                                  *(_QWORD *)&targetBuffType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  v22 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v21);
  if ( !v22 )
    goto LABEL_48;
  klass = v22->klass;
  v24 = v22;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(v22, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8));
  if ( !v28 )
    sub_B170D4();
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_16;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_16:
      v32 = sub_AAFEF8(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_23;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_23:
      v36 = sub_AAFEF8(v28, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(
                                                                   v28,
                                                                   *(_QWORD *)(v36 + 8));
    if ( BattleBuffData__CheckCommandCardBuffActive(this, commandData, (BattleBuffData_BuffData_o *)v37, 1, v38) )
    {
      entity = 0LL;
      if ( !v37 )
        sub_B170D4();
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             v37->fields.missionTargetId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_B170D4();
        v39 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(targetBuffType, v39, 0LL) )
        {
          if ( !v45 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v45,
            v37,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
    }
  }
  v40 = *(_QWORD *)v28;
  if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
        goto LABEL_40;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_40:
    v43 = sub_AAFEF8(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v28, *(_QWORD *)(v43 + 8));
  if ( !v45 )
LABEL_48:
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v45,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetCommandCardTypeChangeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_BuffData_o *result; // x0
  __int64 v5; // x2
  const MethodInfo *v6; // x4
  BattleBuffData_BuffData_o *v7; // x1
  BattleBuffData_BuffData_array *BuffList_31020028; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x8

  if ( (byte_40FD439 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TYPE___TypeInfo, method);
    byte_40FD439 = 1;
  }
  result = (BattleBuffData_BuffData_o *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v2);
  if ( !result )
    sub_B170D4();
  v7 = result;
  if ( !result->fields.count )
    goto LABEL_11;
  *(_DWORD *)&result->fields.isUse = 156;
  BuffList_31020028 = BattleBuffData__getBuffList_31020028(this, (BuffList_TYPE_array *)result, 0LL, 0LL, v6);
  result = (BattleBuffData_BuffData_o *)BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_31020028, v9);
  if ( result )
  {
    v10 = *(_QWORD *)&result->fields.count;
    if ( v10 )
    {
      if ( (_DWORD)v10 )
        return *(BattleBuffData_BuffData_o **)&result->fields.isUse;
LABEL_11:
      sub_B17100(result, v7, v5);
      sub_B170A0();
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
  __int64 v13; // x3
  __int64 v14; // x4
  BattleBuffData_CheckIndividualitiesData_o *v15; // x0
  BattleBuffData_CheckIndividualitiesData_o *v16; // x23
  BattleServantData_o *v17; // x1
  BattleServantData_o *v18; // x2
  const MethodInfo *v19; // x5

  if ( (byte_40FD444 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, selfSvt);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    byte_40FD444 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12,
                                                       v13,
                                                       v14);
  v16 = v15;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    v17 = selfSvt;
    v18 = targetSvt;
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  BattleBuffData_CheckIndividualitiesData___ctor(v15, v17, v18, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_31040328(this, 102, v16, 0, checkOnly, v19);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x19
  BattleBuffData___c_c *v14; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__231_0; // x20
  Il2CppObject *v17; // x21
  BattleServantConfConponent_o *p__9__231_0; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_40FD442 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v4);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v6);
    sub_B16FFC(&Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__231_0__, v7);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v8);
    byte_40FD442 = 1;
  }
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  v14 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v14 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__231_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__231_0;
  if ( !_9__231_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__231_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                     v9,
                                                                                     v10,
                                                                                     v11,
                                                                                     v12);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__231_0,
      v17,
      Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__231_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__231_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__231_0;
    p__9__231_0->klass = (BattleServantConfConponent_c *)_9__231_0;
    sub_B16F98(p__9__231_0, (System_Int32_array **)_9__231_0, v19, v20, v21, v22, v23, v24);
  }
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)CurrentAllBaffList,
          (System_Func_TSource__bool__o *)_9__231_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         v25,
                                                                         (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  BattleBuffData___c_c *v26; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__216_0; // x22
  Il2CppObject *v29; // x23
  BattleServantConfConponent_o *p__9__216_0; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  BattleBuffData___c_c *v42; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  struct BattleBuffData___c_StaticFields *v44; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__216_1; // x21
  Il2CppObject *v46; // x22
  BattleServantConfConponent_o *p__9__216_1; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_T__o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BattleBuffData___c_c *v59; // x0
  struct BattleBuffData___c_StaticFields *v60; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__216_2; // x20
  Il2CppObject *v62; // x21
  BattleServantConfConponent_o *p__9__216_2; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  BattleBuffData___c_c *v74; // x0
  struct BattleBuffData___c_StaticFields *v75; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__216_3; // x20
  Il2CppObject *v77; // x21
  BattleServantConfConponent_o *p__9__216_3; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7

  if ( (byte_40FD437 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, method);
    sub_B16FFC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v13);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B16FFC(&Method_BattleBuffData___c__GetEffectBuffList_b__216_0__, v15);
    sub_B16FFC(&Method_BattleBuffData___c__GetEffectBuffList_b__216_1__, v16);
    sub_B16FFC(&Method_BattleBuffData___c__GetEffectBuffList_b__216_2__, v17);
    sub_B16FFC(&Method_BattleBuffData___c__GetEffectBuffList_b__216_3__, v18);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v19);
    byte_40FD437 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  v26 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v26 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__216_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__216_0;
  if ( !_9__216_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__216_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v21,
                                                                           v22,
                                                                           v23,
                                                                           v24);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__216_0,
      v29,
      Method_BattleBuffData___c__GetEffectBuffList_b__216_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__216_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__216_0;
    p__9__216_0->klass = (BattleServantConfConponent_c *)_9__216_0;
    sub_B16F98(p__9__216_0, (System_Int32_array **)_9__216_0, v31, v32, v33, v34, v35, v36);
  }
  if ( !passiveList )
    goto LABEL_39;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                         (System_Predicate_T__o *)_9__216_0,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    All,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v42 = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v42 = BattleBuffData___c_TypeInfo;
  }
  v44 = v42->static_fields;
  _9__216_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v44->__9__216_1;
  if ( !_9__216_1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v44 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__216_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v38,
                                                                           v39,
                                                                           v40,
                                                                           v41);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__216_1,
      v46,
      Method_BattleBuffData___c__GetEffectBuffList_b__216_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__216_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__216_1;
    p__9__216_1->klass = (BattleServantConfConponent_c *)_9__216_1;
    sub_B16F98(p__9__216_1, (System_Int32_array **)_9__216_1, v48, v49, v50, v51, v52, v53);
  }
  if ( !activeList )
LABEL_39:
    sub_B170D4();
  v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__216_1,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    v54,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v59 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v59 = BattleBuffData___c_TypeInfo;
  }
  v60 = v59->static_fields;
  _9__216_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v60->__9__216_2;
  if ( !_9__216_2 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v60 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v60->__9;
    _9__216_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                            v55,
                                                                            v56,
                                                                            v57,
                                                                            v58);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__216_2,
      v62,
      Method_BattleBuffData___c__GetEffectBuffList_b__216_2__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    p__9__216_2 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__216_2;
    p__9__216_2->klass = (BattleServantConfConponent_c *)_9__216_2;
    sub_B16F98(p__9__216_2, (System_Int32_array **)_9__216_2, v64, v65, v66, v67, v68, v69);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__216_2,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  v74 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v74 = BattleBuffData___c_TypeInfo;
  }
  v75 = v74->static_fields;
  _9__216_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v75->__9__216_3;
  if ( !_9__216_3 )
  {
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v75 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v77 = (Il2CppObject *)v75->__9;
    _9__216_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v70,
                                                                           v71,
                                                                           v72,
                                                                           v73);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__216_3,
      v77,
      Method_BattleBuffData___c__GetEffectBuffList_b__216_3__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__216_3 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__216_3;
    p__9__216_3->klass = (BattleServantConfConponent_c *)_9__216_3;
    sub_B16F98(p__9__216_3, (System_Int32_array **)_9__216_3, v79, v80, v81, v82, v83, v84);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v20,
    (System_Predicate_T__o *)_9__216_3,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v20;
}


int32_t __fastcall BattleBuffData__GetFamilyLinkageIdMax(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_HashSet_int__o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v31; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v33; // x20
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x20
  System_Action_int__o **v38; // x22
  System_Action_int__o **v39; // x23
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  BattleBuffData_BuffData_o *v48; // x0
  BattleBuffData_BuffData_o *v49; // x24
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_int__o *v55; // x26
  System_Collections_Generic_IEnumerable_T__o *v56; // x25
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array *FamilyLinkageIdArray; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_int__o *v68; // x25
  System_Collections_Generic_IEnumerable_T__o *v69; // x24
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 *v82; // [xsp+0h] [xbp-60h]

  if ( (byte_40FD445 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass235_0__GetFamilyLinkageIdMax_b__0__, v15);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass235_0__GetFamilyLinkageIdMax_b__1__, v16);
    sub_B16FFC(&BattleBuffData___c__DisplayClass235_0_TypeInfo, v17);
    byte_40FD445 = 1;
  }
  v18 = sub_B170CC(BattleBuffData___c__DisplayClass235_0_TypeInfo, method, v2, v3, v4);
  BattleBuffData___c__DisplayClass235_0___ctor((BattleBuffData___c__DisplayClass235_0_o *)v18, 0LL);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !v18 )
    goto LABEL_43;
  *(_QWORD *)(v18 + 16) = v23;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  v31 = BattleBuffData__AllBuffEnumerable(this, v30);
  if ( !v31 )
    goto LABEL_43;
  klass = v31->klass;
  v33 = v31;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(v31, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v82 = (__int64 *)(v18 + 16);
  v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v33,
          *(_QWORD *)(p_method + 8));
  if ( !v37 )
    sub_B170D4();
  v38 = (System_Action_int__o **)(v18 + 24);
  v39 = (System_Action_int__o **)(v18 + 32);
  while ( 1 )
  {
    v40 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_17;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_17:
      v43 = sub_AAFEF8(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v37, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    v44 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v46 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_24;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_24:
      v47 = sub_AAFEF8(v37, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v48 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
    v49 = v48;
    if ( !v48 )
      sub_B170D4();
    FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(v48, 0LL);
    v55 = *v38;
    v56 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageTargetIdArray;
    if ( !*v38 )
    {
      v55 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v51, v52, v53, v54);
      System_Action_int____ctor(
        v55,
        (Il2CppObject *)v18,
        Method_BattleBuffData___c__DisplayClass235_0__GetFamilyLinkageIdMax_b__0__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      *v38 = v55;
      sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)v55, v57, v58, v59, v60, v61, v62);
    }
    BasicHelper__ForEach_int_(
      v56,
      (System_Action_T__o *)v55,
      (const MethodInfo_18B6CD8 *)Method_BasicHelper_ForEach_int___);
    FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(v49, 0LL);
    v68 = *v39;
    v69 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageIdArray;
    if ( !*v39 )
    {
      v68 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v64, v65, v66, v67);
      System_Action_int____ctor(
        v68,
        (Il2CppObject *)v18,
        Method_BattleBuffData___c__DisplayClass235_0__GetFamilyLinkageIdMax_b__1__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      *v39 = v68;
      sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v68, v70, v71, v72, v73, v74, v75);
    }
    BasicHelper__ForEach_int_(
      v69,
      (System_Action_T__o *)v68,
      (const MethodInfo_18B6CD8 *)Method_BasicHelper_ForEach_int___);
  }
  v76 = *(_QWORD *)v37;
  if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
  {
    v77 = 0LL;
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      ++v77;
      v78 += 4;
      if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
        goto LABEL_36;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_36:
    v79 = sub_AAFEF8(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v37, *(_QWORD *)(v79 + 8));
  v80 = *v82;
  if ( !*v82 )
LABEL_43:
    sub_B170D4();
  if ( *(int *)(v80 + 32) < 1 )
    return 0;
  else
    return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v80, 0LL);
}


BattleBuffData_FieldChangeData_array *__fastcall BattleBuffData__GetFieldChangeArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x20
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x1
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0

  if ( (byte_40FD449 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo, v12);
    byte_40FD449 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__);
  v15 = BattleBuffData__AllBuffValidEnumerable(this, 1, v14);
  if ( !v15 )
    goto LABEL_38;
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
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(v15, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v17,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_B170D4();
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_15;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_15:
      v25 = sub_AAFEF8(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v28 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_AAFEF8(v21, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !v30 )
      sub_B170D4();
    v31 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v30 + 312);
    if ( v31 )
    {
      if ( !v13 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        v31,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__);
    }
  }
  v32 = *(_QWORD *)v21;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v33 = 0LL;
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_32;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_32:
    v35 = sub_AAFEF8(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v21, *(_QWORD *)(v35 + 8));
  if ( !v13 )
LABEL_38:
    sub_B170D4();
  return (BattleBuffData_FieldChangeData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__);
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

  if ( (byte_40FD421 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_40FD421 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v15 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v14);
  if ( !v15 )
    sub_B170D4();
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
    p_method = sub_AAFEF8(v15, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v17,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_B170D4();
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
      v26 = sub_AAFEF8(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_AAFEF8(v21, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v31 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v21, *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( !v31 )
      sub_B170D4();
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
    v37 = sub_AAFEF8(v21, System_IDisposable_TypeInfo, 0LL);
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
  const MethodInfo *v5; // x5
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *BuffList_31040328; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_40FD420 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleBuffData__GetFixBuffArray_b__183_0__, *(_QWORD *)&act);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v11);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    byte_40FD420 = 1;
  }
  BuffList_31040328 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList_31040328(
                                                                             this,
                                                                             act,
                                                                             checkIndividualities,
                                                                             isRec,
                                                                             0,
                                                                             v5);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleBuffData__GetFixBuffArray_b__183_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          BuffList_31040328,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v20,
                                            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixedBuffArray(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *BuffList_31020028; // x1
  const MethodInfo *v7; // x2

  BuffList_31020028 = BattleBuffData__getBuffList_31020028(this, types, targetIndividualities, checklist, method);
  return BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_31020028, v7);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__GetGrantBuffTypeArray(
        BattleBuffData_o *this,
        bool isIncludePassive,
        bool isIncludeActive,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_int__o **v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x22
  const MethodInfo *v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_IEnumerable_TSource__o *PassiveList; // x23
  BattleBuffData___c_c *v51; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__114_1; // x24
  Il2CppObject *v54; // x25
  struct BattleBuffData___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Collections_Generic_IEnumerable_TSource__o *ActiveList; // x20
  BattleBuffData___c_c *v68; // x8
  struct BattleBuffData___c_StaticFields *v69; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__114_2; // x21
  Il2CppObject *v71; // x23
  struct BattleBuffData___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_IEnumerable_T__o *v79; // x0

  if ( (byte_40FD3F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, isIncludePassive);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v10);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__114_1__, v16);
    sub_B16FFC(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__114_2__, v17);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass114_0__GetGrantBuffTypeArray_b__0__, v18);
    sub_B16FFC(&BattleBuffData___c__DisplayClass114_0_TypeInfo, v19);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v20);
    byte_40FD3F4 = 1;
  }
  v21 = sub_B170CC(BattleBuffData___c__DisplayClass114_0_TypeInfo, isIncludePassive, isIncludeActive, method, v4);
  BattleBuffData___c__DisplayClass114_0___ctor((BattleBuffData___c__DisplayClass114_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_26;
  *(_QWORD *)(v21 + 24) = this;
  v28 = (System_Collections_Generic_List_int__o **)(v21 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v21 + 16) = v33;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v40,
                                                                               v41,
                                                                               v42,
                                                                               v43);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v44,
    (Il2CppObject *)v21,
    Method_BattleBuffData___c__DisplayClass114_0__GetGrantBuffTypeArray_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( isIncludePassive )
  {
    PassiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getPassiveList(this, 1, v45);
    v51 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v51 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__114_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__114_1;
    if ( !_9__114_1 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__114_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                       v46,
                                                                                       v47,
                                                                                       v48,
                                                                                       v49);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__114_1,
        v54,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__114_1__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v55 = BattleBuffData___c_TypeInfo->static_fields;
      v55->__9__114_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__114_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v55->__9__114_1,
        (System_Int32_array **)_9__114_1,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    v62 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           PassiveList,
                                                           (System_Func_TSource__bool__o *)_9__114_1,
                                                           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v62,
      (System_Action_T__o *)v44,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  if ( isIncludeActive )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getActiveList(this, 1, v45);
    v68 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v68 = BattleBuffData___c_TypeInfo;
    }
    v69 = v68->static_fields;
    _9__114_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v69->__9__114_2;
    if ( !_9__114_2 )
    {
      if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v69 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)v69->__9;
      _9__114_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                       v63,
                                                                                       v64,
                                                                                       v65,
                                                                                       v66);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__114_2,
        v71,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__114_2__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v72 = BattleBuffData___c_TypeInfo->static_fields;
      v72->__9__114_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__114_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v72->__9__114_2,
        (System_Int32_array **)_9__114_2,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    v79 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           ActiveList,
                                                           (System_Func_TSource__bool__o *)_9__114_2,
                                                           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v79,
      (System_Action_T__o *)v44,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  if ( !*v28 )
LABEL_26:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           *v28,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__GetIgnoreAuraBuffIds(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array *result; // x0
  BattleServantConfConponent_o *p_ignoreAuraBuffIds; // x19
  System_Int32_array *ignoreAuraBuffIds; // t1
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array **ValueArray; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FD42E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_7236/*"IGNORE_AURA_BUFF"*/, v4);
    byte_40FD42E = 1;
  }
  ignoreAuraBuffIds = this->fields.ignoreAuraBuffIds;
  p_ignoreAuraBuffIds = (BattleServantConfConponent_o *)&this->fields.ignoreAuraBuffIds;
  result = ignoreAuraBuffIds;
  if ( !ignoreAuraBuffIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    ValueArray = (System_Int32_array **)ConstantStrMaster__GetValueArray(
                                          MasterData_WarQuestSelectionMaster,
                                          (System_String_o *)StringLiteral_7236/*"IGNORE_AURA_BUFF"*/,
                                          0LL,
                                          0LL);
    p_ignoreAuraBuffIds->klass = (BattleServantConfConponent_c *)ValueArray;
    sub_B16F98(p_ignoreAuraBuffIds, ValueArray, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_40FD44D & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, v1);
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantStrMaster___, v2);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_7279/*"INVALID_SACRIFICE_INDIV"*/, v4);
    byte_40FD44D = 1;
  }
  constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
  if ( !constantStrMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    static_fields = (BattleServantConfConponent_o *)BattleBuffData_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)Master_WarQuestSelectionMaster;
    sub_B16F98(static_fields, Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
    if ( !constantStrMaster )
      sub_B170D4();
  }
  return ConstantStrMaster__GetValueArray(constantStrMaster, (System_String_o *)StringLiteral_7279/*"INVALID_SACRIFICE_INDIV"*/, 0LL, 0LL);
}


int32_t __fastcall BattleBuffData__GetMotionChange(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  int32_t klass; // w19
  int v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD43A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_40FD43A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v13);
  if ( !v12 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v15);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B170D4();
    klass = (int32_t)v20.fields.current[11].klass;
    if ( klass )
    {
      v18 = 3;
      goto LABEL_10;
    }
  }
  klass = 0;
  v18 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (unsigned int)(v18 + 1) >> 2 )
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
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_int__o *v30; // x21
  const MethodInfo *v31; // x5
  Il2CppObject *current; // x23
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40FD41A & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, checkIndividualities);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    byte_40FD41A = 1;
  }
  plusMinus = 0;
  memset(&v35, 0, sizeof(v35));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(103, 0LL, 0LL);
  plusMinus = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v22);
  if ( !v21 )
    goto LABEL_18;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v24);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v30 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v21,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v35.fields.current;
    if ( BattleBuffData__checkIndiviuality(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)v35.fields.current,
           checkIndividualities,
           &plusMinus,
           v31) )
    {
      if ( !current )
        sub_B170D4();
      klass = (System_Collections_Generic_IEnumerable_T__o *)current[19].klass;
      if ( klass )
      {
        if ( !v30 )
          sub_B170D4();
        System_Collections_Generic_List_int___AddRange(
          v30,
          klass,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v30 )
LABEL_18:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
        BuffEntity_o **buffEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleBuffData_BuffData_o *ShiftGutsBuff; // x0
  const MethodInfo *v9; // x1
  BattleBuffData_BuffData_o *v10; // x20
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t type; // w21

  if ( (byte_40FD3F9 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, servantData);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    byte_40FD3F9 = 1;
  }
  ShiftGutsBuff = BattleBuffData__GetShiftGutsBuff(this, servantData, (const MethodInfo *)buffEntity);
  if ( ShiftGutsBuff )
  {
    v10 = ShiftGutsBuff;
    buffMst = BattleBuffData__get_buffMst(this, v9);
    if ( !buffMst )
      goto LABEL_14;
    Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                               v10->fields.buffId,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    *buffEntity = Entity;
    sub_B16F98((BattleServantConfConponent_o *)buffEntity, (System_Int32_array **)Entity, v13, v14, v15, v16, v17, v18);
    if ( !*buffEntity )
      goto LABEL_14;
    type = (*buffEntity)->fields.type;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__CheckType(173, type, 0LL) )
    {
      LODWORD(ShiftGutsBuff) = v10->fields.param;
      return (int)ShiftGutsBuff;
    }
    if ( !servantData )
LABEL_14:
      sub_B170D4();
    LODWORD(ShiftGutsBuff) = v10->fields.param * servantData->fields.maxhp / 1000;
  }
  return (int)ShiftGutsBuff;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetShiftGutsBuff(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  int plusTypes; // w8
  BuffList_TYPE_array *v13; // x21
  BattleBuffData_CheckIndividualitiesData_o *v14; // x22
  const MethodInfo *v15; // x4
  BattleBuffData_BuffData_array *BuffList_31020028; // x20
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  BuffList_ActInfo_o *v19; // x21
  unsigned __int64 v20; // x23
  BattleBuffData_BuffData_o *v21; // x22

  if ( (byte_40FD3F8 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, servantData);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    sub_B16FFC(&BuffList_TYPE___TypeInfo, v6);
    byte_40FD3F8 = 1;
  }
  ActInfo = (BuffList_ActInfo_o *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, method);
  if ( !ActInfo )
    goto LABEL_20;
  plusTypes = (int)ActInfo->fields.plusTypes;
  v13 = (BuffList_TYPE_array *)ActInfo;
  if ( !plusTypes )
    goto LABEL_19;
  LODWORD(ActInfo->fields.minusTypes) = 173;
  if ( plusTypes == 1 )
    goto LABEL_19;
  HIDWORD(ActInfo->fields.minusTypes) = 172;
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v8,
                                                       v9,
                                                       v10,
                                                       v11);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, servantData, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v14 )
    goto LABEL_20;
  BuffList_31020028 = BattleBuffData__getBuffList_31020028(
                        this,
                        v13,
                        v14->fields._selfConcatSvtIndividualities_k__BackingField,
                        0LL,
                        v15);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(111, 0LL, 0LL);
  if ( !BuffList_31020028 )
LABEL_20:
    sub_B170D4();
  v18 = *(_QWORD *)&BuffList_31020028->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = ActInfo;
    v20 = 0LL;
    while ( v20 < (unsigned int)v18 )
    {
      if ( !v19 )
        goto LABEL_20;
      v21 = BuffList_31020028->m_Items[v20];
      ActInfo = (BuffList_ActInfo_o *)BattleBuffData__checkBuffSuccessful(this, v21, v19->fields.isRec, v17);
      if ( ((unsigned __int8)ActInfo & 1) != 0 )
        return v21;
      LODWORD(v18) = BuffList_31020028->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        return 0LL;
    }
LABEL_19:
    sub_B17100(ActInfo, v8, v9);
    sub_B170A0();
  }
  return 0LL;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_int__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x20

  if ( (byte_40FD433 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, buffList);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v9);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass208_0__GetSkillTypeBuff_b__0__, v11);
    sub_B16FFC(&BattleBuffData___c__DisplayClass208_0_TypeInfo, v12);
    byte_40FD433 = 1;
  }
  v13 = sub_B170CC(BattleBuffData___c__DisplayClass208_0_TypeInfo, buffList, skillTypes, method, v4);
  BattleBuffData___c__DisplayClass208_0___ctor((BattleBuffData___c__DisplayClass208_0_o *)v13, 0LL);
  v18 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor_49346956(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)skillTypes,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = v18,
        sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24),
        v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v25,
                                                                         v26,
                                                                         v27,
                                                                         v28),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v29,
          (Il2CppObject *)v13,
          Method_BattleBuffData___c__DisplayClass208_0__GetSkillTypeBuff_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !buffList) )
  {
    sub_B170D4();
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)buffList,
                                                                         (System_Predicate_T__o *)v29,
                                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
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
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  int32_t ParamAddCount; // w22
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  int32_t v15; // w0
  int v16; // w21
  BattleBuffData_o *QuestIndividualities; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w0
  int32_t paramAddMaxCount; // w9
  int32_t paramAddMax; // w8
  int32_t result; // w0

  if ( !buffData )
    goto LABEL_17;
  v8 = BattleBuffData_BuffData__checkState(buffData, 0x100000, 0LL);
  if ( !checkIndividualities )
    goto LABEL_17;
  v10 = 16LL;
  if ( v8 )
    v10 = 32LL;
  ParamAddCount = BattleBuffData__GetParamAddCount(
                    (BattleBuffData_o *)v8,
                    *(System_Int32_array **)((char *)&checkIndividualities->klass + v10),
                    buffData->fields.paramAddSelfIndividuality,
                    v9);
  v12 = BattleBuffData_BuffData__checkState(buffData, 0x100000, 0LL);
  v14 = 24LL;
  if ( v12 )
    v14 = 40LL;
  v15 = BattleBuffData__GetParamAddCount(
          (BattleBuffData_o *)v12,
          *(System_Int32_array **)((char *)&checkIndividualities->klass + v14),
          buffData->fields.paramAddOpIndividuality,
          v13);
  if ( !battleData )
LABEL_17:
    sub_B170D4();
  v16 = v15 + ParamAddCount;
  QuestIndividualities = (BattleBuffData_o *)BattleData__getQuestIndividualities(battleData, 0LL);
  v19 = BattleBuffData__GetParamAddCount(
          QuestIndividualities,
          (System_Int32_array *)QuestIndividualities,
          buffData->fields.paramAddFieldIndividuality,
          v18);
  paramAddMaxCount = buffData->fields.paramAddMaxCount;
  paramAddMax = buffData->fields.paramAddMax;
  if ( paramAddMaxCount > v16 + v19 || paramAddMaxCount < 1 )
    paramAddMaxCount = v16 + v19;
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
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *updateWaitIntervalBuffList; // x0
  WarBoardUiData_SaveData_array *v6; // x0

  if ( (byte_40FD3B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v3);
    byte_40FD3B3 = 1;
  }
  v4 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
    if ( !updateWaitIntervalBuffList
      || (v6 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)updateWaitIntervalBuffList,
                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          !this->fields.updateWaitIntervalBuffList) )
    {
      sub_B170D4();
    }
    v4 = (BattleBuffData_BuffData_array *)v6;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.updateWaitIntervalBuffList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
  return v4;
}


void __fastcall BattleBuffData__Initialize(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *conditionalAuraBuff; // x0

  if ( (byte_40FD3B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    byte_40FD3B8 = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (activeList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (conditionalAuraBuff = this->fields.conditionalAuraBuff) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)conditionalAuraBuff,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__InitializeShift(
        BattleBuffData_o *this,
        int32_t actorId,
        System_Int32_array *buffindivs,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
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
  __int64 v30; // x3
  __int64 v31; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v38; // x21

  if ( (byte_40FD426 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, *(_QWORD *)&actorId);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass190_0__InitializeShift_b__0__, v10);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass190_0__InitializeShift_b__1__, v11);
    sub_B16FFC(&BattleBuffData___c__DisplayClass190_0_TypeInfo, v12);
    byte_40FD426 = 1;
  }
  v13 = sub_B170CC(BattleBuffData___c__DisplayClass190_0_TypeInfo, *(_QWORD *)&actorId, buffindivs, method, v4);
  BattleBuffData___c__DisplayClass190_0___ctor((BattleBuffData___c__DisplayClass190_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = actorId;
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 32) = buffindivs;
  v20 = v13 + 32;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 32),
    (System_Int32_array **)buffindivs,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  passiveList = this->fields.passiveList;
  v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v28,
                                                                   v29,
                                                                   v30,
                                                                   v31);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v32,
    (Il2CppObject *)v13,
    Method_BattleBuffData___c__DisplayClass190_0__InitializeShift_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !passiveList )
    goto LABEL_10;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)passiveList,
    (System_Predicate_T__o *)v32,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  if ( !*(_QWORD *)v20 )
    goto LABEL_10;
  if ( *(_QWORD *)(*(_QWORD *)v20 + 24LL) )
  {
    activeList = this->fields.activeList;
    v38 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                     v33,
                                                                     v34,
                                                                     v35,
                                                                     v36);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v38,
      (Il2CppObject *)v13,
      Method_BattleBuffData___c__DisplayClass190_0__InitializeShift_b__1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    if ( activeList )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)activeList,
        (System_Predicate_T__o *)v38,
        (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
      return;
    }
LABEL_10:
    sub_B170D4();
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
    sub_B170D4();
  return CounterFuncBuffDataList->max_length != 0;
}


bool __fastcall BattleBuffData__IsIgnoreIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 0x10000, 0LL);
}


bool __fastcall BattleBuffData__IsPermanentSleep(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  BuffList_ActInfo_o *ActInfo; // x22
  Il2CppObject *current; // x21
  const MethodInfo *v21; // x5
  char v22; // w19
  int v23; // w20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_40FD440 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, checkIndividualities);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v13);
    byte_40FD440 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  plusMinus = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  checkIndividualities,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v15);
  if ( !v14 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v17);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(39, 0LL, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v25.fields.current;
    if ( !v25.fields.current )
      sub_B170D4();
    if ( !BYTE2(v25.fields.current[23].klass)
      && BattleBuffData_BuffData__IsPermanentSleep((BattleBuffData_BuffData_o *)v25.fields.current, 0LL)
      && BattleBuffData__checkIndiviuality(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)current,
           checkIndividualities,
           &plusMinus,
           v21) )
    {
      v22 = 1;
      v23 = 5;
      goto LABEL_15;
    }
  }
  v22 = 0;
  v23 = 3;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v23 == 5) & v22;
}


bool __fastcall BattleBuffData__IsShiftGuts(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  return BattleBuffData__GetShiftGutsBuff(this, servantData, method) != 0LL;
}


bool __fastcall BattleBuffData__IsUnfix(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  __int64 v7; // x21
  int size; // w8

  if ( (byte_40FD3C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, buff);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_40FD3C4 = 1;
  }
  unfixedBuffList = this->fields.unfixedBuffList;
  if ( !unfixedBuffList )
LABEL_11:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    size = unfixedBuffList->fields._size;
    if ( (int)v7 >= size )
      return 0;
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !buff )
      goto LABEL_11;
    if ( unfixedBuffList->fields._items->m_Items[v7 + 1] == buff->fields.addOrder )
      return 1;
    unfixedBuffList = this->fields.unfixedBuffList;
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
  char v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD441 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v6);
    byte_40FD441 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  if ( !CurrentAllBaffList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CurrentAllBaffList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    if ( !BYTE2(v11.fields.current[23].klass)
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v9 == 2) & v8;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__MakeRemoveBuffInfo(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endList,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removedLinkedBuffs,
        const MethodInfo *method)
{
  __int64 v4; // x4
  RemovedBuffInfo_o *v7; // x21

  if ( (byte_40FD3F0 & 1) == 0 )
  {
    sub_B16FFC(&RemovedBuffInfo_TypeInfo, endList);
    byte_40FD3F0 = 1;
  }
  v7 = (RemovedBuffInfo_o *)sub_B170CC(RemovedBuffInfo_TypeInfo, endList, removedLinkedBuffs, method, v4);
  RemovedBuffInfo___ctor(v7, 0LL);
  if ( !v7 )
    sub_B170D4();
  RemovedBuffInfo__AddBuffs(v7, (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)endList, 0, 0LL);
  RemovedBuffInfo__AddBuffs(
    v7,
    (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)removedLinkedBuffs,
    1,
    0LL);
  return v7;
}


bool __fastcall BattleBuffData__OffStateWithAuraConditionCheck(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  bool v10; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_auraBuffList; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_conditionalAuraBuff; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v13; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *conditionalAuraBuff; // t1
  BattleBuffData_o *v15; // x0
  const MethodInfo *v16; // x3

  if ( (byte_40FD430 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v7);
    byte_40FD430 = 1;
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
    p_auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.auraBuffList;
    if ( buff->fields.auraEffectId )
    {
      if ( !*p_auraBuffList )
        goto LABEL_24;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)*p_auraBuffList,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v10 = 0;
      }
      else
      {
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_auraBuffList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        v10 = 1;
      }
      conditionalAuraBuff = this->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = &this->fields.conditionalAuraBuff;
      v13 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B170D4();
      v8 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             v13,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( !v8 )
      {
        if ( *p_conditionalAuraBuff )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_conditionalAuraBuff,
            (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v10 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v10 = 0;
      p_conditionalAuraBuff = &this->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v8,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v9);
    BattleBuffData__ApplyBuffData(v15, buff, p_conditionalAuraBuff, v16);
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
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  char v10; // w22
  System_Collections_Generic_List_WarBoardManager_TaskList__o **p_auraBuffList; // x21
  int v12; // w23
  System_Collections_Generic_List_WarBoardManager_TaskList__o **p_conditionalAuraBuff; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v14; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *conditionalAuraBuff; // t1
  BattleBuffData_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_40FD42F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, buff);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v7);
    byte_40FD42F = 1;
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
    p_auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o **)&this->fields.auraBuffList;
    if ( buff->fields.auraEffectId )
    {
      if ( !*p_auraBuffList )
        goto LABEL_24;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             *p_auraBuffList,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          *p_auraBuffList,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      conditionalAuraBuff = this->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o **)&this->fields.conditionalAuraBuff;
      v14 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B170D4();
      v8 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             v14,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      v10 = v12 != 0;
      if ( v8 )
      {
        if ( *p_conditionalAuraBuff )
        {
          v8 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                 *p_conditionalAuraBuff,
                 (WarBoardManager_TaskList_o *)buff,
                 (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          v10 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v10 = 0;
      p_conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o **)&this->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v8,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v9);
    BattleBuffData__ApplyBuffData(
      v16,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_conditionalAuraBuff,
      v17);
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
    sub_B170D4();
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
  int32_t EventId; // w0
  EventCommandAssistEntity_o *CurrentEntity; // x20
  __int64 v11; // x21
  __int64 v12; // x21
  DataManager_o *v13; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD42B & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, buff);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_40FD42B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  EventId = BattleData__GetEventId(0LL);
  if ( !buff || !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_WarQuestSelectionMaster,
                    EventId,
                    buff->fields.commandAssistId,
                    -1,
                    0,
                    0LL);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AAFCFC(v12);
  v13 = **(DataManager_o ***)(v12 + 184);
  if ( !v13 )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v13,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  entity = 0LL;
  if ( !CurrentEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !SkillLvMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          CurrentEntity->fields.skillId,
          CurrentEntity->fields.skillLv,
          0LL) )
    return;
  if ( !entity )
LABEL_23:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  CommandCodeSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v9; // x20
  __int64 v10; // x20
  DataManager_o *v11; // x0
  WarQuestSelectionMaster_o *v12; // x0
  SkillLvMaster_o *v13; // x20
  CommandCodeSkillEntity_array *CommandCodeActiveSkillList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int max_length; // w8
  CommandCodeSkillEntity_array *v18; // x21
  unsigned int v19; // w22
  CommandCodeSkillEntity_o *v20; // x8
  int chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD429 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, buff);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FD429 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (CommandCodeSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(v10);
  v11 = **(DataManager_o ***)(v10 + 184);
  if ( !v11
    || (v12 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                v11,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !buff)
    || !MasterData_WarQuestSelectionMaster
    || (v13 = (SkillLvMaster_o *)v12,
        (CommandCodeActiveSkillList = CommandCodeSkillMaster__getCommandCodeActiveSkillList(
                                        MasterData_WarQuestSelectionMaster,
                                        buff->fields.masterCommandCodeId,
                                        0LL)) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  max_length = CommandCodeActiveSkillList->max_length;
  v18 = CommandCodeActiveSkillList;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        sub_B17100(CommandCodeActiveSkillList, v15, v16);
        sub_B170A0();
      }
      v20 = v18->m_Items[v19];
      entity = 0LL;
      if ( !v20 || !v13 )
        goto LABEL_24;
      CommandCodeActiveSkillList = (CommandCodeSkillEntity_array *)SkillLvMaster__TryGetEntity(
                                                                     v13,
                                                                     &entity,
                                                                     v20->fields.skillId,
                                                                     1,
                                                                     0LL);
      if ( ((unsigned __int8)CommandCodeActiveSkillList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_24;
        chargeTurn = entity->fields.chargeTurn;
        if ( chargeTurn >= 1 )
          break;
      }
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x24
  int32_t v9; // w21
  unsigned int size; // w8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v11; // x0

  if ( (byte_40FD3C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, condition);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v7);
    byte_40FD3C6 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
LABEL_13:
    sub_B170D4();
  v9 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v9 >= (int)size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( condition )
    {
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
             condition,
             activeList->fields._items->m_Items[v9],
             (const MethodInfo_2B6AB54 *)Method_System_Func_BattleBuffData_BuffData__bool__Invoke__) )
      {
        v11 = this->fields.activeList;
        if ( !v11 )
          goto LABEL_13;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
          v9--,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      activeList = this->fields.activeList;
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v8; // w21
  unsigned int size; // w8
  BattleBuffData_BuffData_o *v10; // x8
  unsigned int v11; // w23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v12; // x25
  BattleBuffData_BuffData_o *v13; // x8
  int32_t addOrder; // w25
  BattleBuffData_BuffData_o *v15; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v16; // x0

  if ( (byte_40FD3C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, removeBuffList);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v6);
    byte_40FD3C5 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
LABEL_26:
    sub_B170D4();
  v8 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v8 >= (int)size )
      break;
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
          v12 = this->fields.activeList;
          if ( !v12 )
            goto LABEL_26;
          if ( v12->fields._size <= (unsigned int)v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v13 = v12->fields._items->m_Items[v8];
          if ( !v13 )
            goto LABEL_26;
          addOrder = v13->fields.addOrder;
          if ( removeBuffList->fields._size <= v11 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v15 = removeBuffList->fields._items->m_Items[v11];
          if ( !v15 )
            goto LABEL_26;
          if ( addOrder == v15->fields.addOrder )
            break;
          if ( (signed int)++v11 >= removeBuffList->fields._size )
            goto LABEL_25;
        }
        v16 = this->fields.activeList;
        if ( !v16 )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v16,
          v8--,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
    }
LABEL_25:
    activeList = this->fields.activeList;
    ++v8;
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  unsigned __int64 v35; // x19
  __int64 v36; // x25
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v51; // x27
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v53; // x26
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v58; // x27
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x26
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v64; // x27
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v66; // x26
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v71; // x27
  const MethodInfo *v72; // x3
  AddSkillData_array *v73; // x9
  signed int max_length; // w8
  signed int v75; // w10
  AddSkillData_o *v76; // x8
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  __int64 v81; // x24
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v89; // x25
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v94; // x26
  System_Collections_Generic_IEnumerable_T__o *v95; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v96; // x25
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v101; // x26
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v102; // x25
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v107; // x26
  System_Collections_Generic_IEnumerable_T__o *v108; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v109; // x25
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v114; // x26
  signed int v115; // w10
  int v116; // w25
  ClassBoardCommandSpellMaster_o *v118; // [xsp+10h] [xbp-B0h]
  int v120; // [xsp+1Ch] [xbp-A4h]
  signed int v122; // [xsp+28h] [xbp-98h]
  _BYTE v123[28]; // [xsp+30h] [xbp-90h] BYREF
  int v124; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FD453 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, classBoardSkillArray);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v17);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v18);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v19);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__0__, v20);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__1__, v21);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__2__, v22);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__3__, v23);
    sub_B16FFC(&BattleBuffData___c__DisplayClass251_0_TypeInfo, v24);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__4__, v25);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__5__, v26);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__6__, v27);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__7__, v28);
    sub_B16FFC(&BattleBuffData___c__DisplayClass251_1_TypeInfo, v29);
    byte_40FD453 = 1;
  }
  entitys = 0LL;
  memset(&v125, 0, sizeof(v125));
  v124 = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  classBoardSkillArray,
                                                                                                  classBoardCommandSpellArray,
                                                                                                  isDifferentClass,
                                                                                                  logic);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classBoardSkillArray, 0LL) )
  {
    if ( !classBoardSkillArray )
      goto LABEL_51;
    if ( (int)classBoardSkillArray->max_length >= 1 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        v36 = sub_B170CC(BattleBuffData___c__DisplayClass251_0_TypeInfo, v31, v32, v33, v34);
        BattleBuffData___c__DisplayClass251_0___ctor((BattleBuffData___c__DisplayClass251_0_o *)v36, 0LL);
        if ( v35 >= classBoardSkillArray->max_length )
          break;
        if ( !v36 )
          goto LABEL_51;
        v45 = (System_Int32_array **)classBoardSkillArray->m_Items[v35];
        *(_QWORD *)(v36 + 16) = v45;
        sub_B16F98((BattleServantConfConponent_o *)(v36 + 16), v45, v39, v40, v41, v42, v43, v44);
        passiveList = this->fields.passiveList;
        v51 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v47,
                                                                         v48,
                                                                         v49,
                                                                         v50);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v51,
          (Il2CppObject *)v36,
          Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !passiveList )
          goto LABEL_51;
        All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                               (System_Predicate_T__o *)v51,
                                                               (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        if ( !v30 )
          goto LABEL_51;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
          All,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v53 = this->fields.passiveList;
        v58 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v54,
                                                                         v55,
                                                                         v56,
                                                                         v57);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v58,
          (Il2CppObject *)v36,
          Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__1__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v53 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v53,
          (System_Predicate_T__o *)v58,
          (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        activeList = this->fields.activeList;
        v64 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v60,
                                                                         v61,
                                                                         v62,
                                                                         v63);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v64,
          (Il2CppObject *)v36,
          Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__2__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !activeList )
          goto LABEL_51;
        v65 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                               (System_Predicate_T__o *)v64,
                                                               (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
          v65,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v66 = this->fields.activeList;
        v71 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v67,
                                                                         v68,
                                                                         v69,
                                                                         v70);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v71,
          (Il2CppObject *)v36,
          Method_BattleBuffData___c__DisplayClass251_0__RemoveClassBoardSkillBuff_b__3__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v66 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v66,
          (System_Predicate_T__o *)v71,
          (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        if ( (__int64)++v35 >= (int)classBoardSkillArray->max_length )
          goto LABEL_15;
      }
LABEL_52:
      sub_B17100(Master_WarQuestSelectionMaster, v38, v39);
      sub_B170A0();
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
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v73 = classBoardCommandSpellArray;
  if ( !classBoardCommandSpellArray )
LABEL_51:
    sub_B170D4();
  max_length = classBoardCommandSpellArray->max_length;
  if ( max_length >= 1 )
  {
    v120 = 0;
    v75 = 0;
    v118 = Master_WarQuestSelectionMaster;
    while ( v75 < (unsigned int)max_length )
    {
      v76 = v73->m_Items[v75];
      if ( !v76 )
        goto LABEL_51;
      v122 = v75;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_51;
      if ( ClassBoardCommandSpellMaster__TryGetEntityList(
             Master_WarQuestSelectionMaster,
             &entitys,
             v76->fields.id,
             v76->fields.lv,
             0LL) )
      {
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v123,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v125 = *(System_Collections_Generic_List_Enumerator_T__o *)v123;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v125,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          v81 = sub_B170CC(BattleBuffData___c__DisplayClass251_1_TypeInfo, v77, v78, v79, v80);
          BattleBuffData___c__DisplayClass251_1___ctor((BattleBuffData___c__DisplayClass251_1_o *)v81, 0LL);
          if ( !v81 )
            sub_B170D4();
          current = (System_Int32_array **)v125.fields.current;
          *(_QWORD *)(v81 + 16) = v125.fields.current;
          sub_B16F98((BattleServantConfConponent_o *)(v81 + 16), current, v82, v83, v84, v85, v86, v87);
          v89 = this->fields.passiveList;
          v94 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v90,
                                                                           v91,
                                                                           v92,
                                                                           v93);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v94,
            (Il2CppObject *)v81,
            Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__4__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v89 )
            sub_B170D4();
          v95 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                 (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v89,
                                                                 (System_Predicate_T__o *)v94,
                                                                 (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          if ( !v30 )
            sub_B170D4();
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
            v95,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v96 = this->fields.passiveList;
          v101 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                            v97,
                                                                            v98,
                                                                            v99,
                                                                            v100);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v101,
            (Il2CppObject *)v81,
            Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__5__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v96 )
            sub_B170D4();
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v96,
            (System_Predicate_T__o *)v101,
            (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          v102 = this->fields.activeList;
          v107 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                            v103,
                                                                            v104,
                                                                            v105,
                                                                            v106);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v107,
            (Il2CppObject *)v81,
            Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__6__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v102 )
            sub_B170D4();
          v108 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v102,
                                                                  (System_Predicate_T__o *)v107,
                                                                  (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
            v108,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v109 = this->fields.activeList;
          v114 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                            v110,
                                                                            v111,
                                                                            v112,
                                                                            v113);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v114,
            (Il2CppObject *)v81,
            Method_BattleBuffData___c__DisplayClass251_1__RemoveClassBoardSkillBuff_b__7__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v109 )
            sub_B170D4();
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v109,
            (System_Predicate_T__o *)v114,
            (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        }
        *(_DWORD *)&v123[4 * v120 + 24] = 395;
        v116 = ++v124;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v125,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        Master_WarQuestSelectionMaster = v118;
        v115 = v122;
        if ( v116 )
        {
          v120 = v116;
          v73 = classBoardCommandSpellArray;
          if ( *(_DWORD *)&v123[4 * v116 + 20] == 395 )
          {
            v124 = v116 - 1;
            v120 = v116 - 1;
          }
        }
        else
        {
          v73 = classBoardCommandSpellArray;
          v120 = 0;
        }
      }
      else
      {
        v73 = classBoardCommandSpellArray;
        Master_WarQuestSelectionMaster = v118;
        v115 = v122;
      }
      max_length = v73->max_length;
      v75 = v115 + 1;
      if ( v75 >= max_length )
        goto LABEL_50;
    }
    goto LABEL_52;
  }
LABEL_50:
  BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v30,
    logic,
    v72);
}


void __fastcall BattleBuffData__RemoveClassIconEffectBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *effectBuff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *classIconAuraEffectBuffList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v7; // x0

  if ( (byte_40FD451 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, effectBuff);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v5);
    byte_40FD451 = 1;
  }
  if ( !effectBuff )
    goto LABEL_10;
  if ( effectBuff->fields.classIconAuraEffectId )
  {
    classIconAuraEffectBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.classIconAuraEffectBuffList;
    if ( !classIconAuraEffectBuffList )
      goto LABEL_10;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           classIconAuraEffectBuffList,
           (WarBoardManager_TaskList_o *)effectBuff,
           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      v7 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.classIconAuraEffectBuffList;
      if ( v7 )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v7,
          (WarBoardManager_TaskList_o *)effectBuff,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        return;
      }
LABEL_10:
      sub_B170D4();
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
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  const MethodInfo *v13; // x2
  BattleBuffData_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD454 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, removeBuffList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    byte_40FD454 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffList, 0LL) )
  {
    v12 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(this, removeBuffList, 0, v11);
    if ( removeBuffList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)removeBuffList,
        v12,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(this, removeBuffList, v13);
      BattleBuffData__CheckAndUpdateFieldIndividualityBuff(v14, removeBuffList, logic, v15);
      if ( !BattleBuffData__CheckInvalidSacrificeIndivArray(removeBuffList, v16) )
        goto LABEL_8;
      if ( logic )
      {
        BattleLogic__updateFieldBuff(logic, 0LL);
LABEL_8:
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v18,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)removeBuffList,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v18,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v18.fields.current, v17);
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v18,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
        return;
      }
    }
    sub_B170D4();
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
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x26
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x25
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v66; // x25
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x0
  System_Collections_Generic_IEnumerable_T__o *v76; // x1
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Func_BattleBuffData_BuffData__int__bool__o *v85; // x25
  System_Collections_Generic_List_int__o *v86; // x22
  signed __int64 v87; // x8
  unsigned __int64 v88; // x24
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x27
  int32_t size; // w8
  int32_t v91; // w24
  unsigned __int64 v92; // x26
  int v93; // w22
  BattleBuffData_BuffData_o *v94; // x27
  const MethodInfo *v95; // x2
  System_Collections_Generic_IEnumerable_T__o *v96; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v97; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v98; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v99; // x0
  BattleBuffData_o *v100; // x0
  const MethodInfo *v101; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *DummyBuff; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v103; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  int32_t v105; // w8
  unsigned __int64 v106; // x22
  int v107; // w27
  BattleBuffData_BuffData_o *v108; // x26
  const MethodInfo *v109; // x2
  System_Collections_Generic_IEnumerable_T__o *linkageTargetIndividualty; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v112; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v113; // x0
  unsigned __int64 v115; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v116; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v118; // [xsp+20h] [xbp-60h]

  if ( (byte_40FD3D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, endBuffs);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__, v10);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__, v11);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__int__bool__TypeInfo, v12);
    sub_B16FFC(&System_IDisposable_TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v28);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v30);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass71_0__RemoveLinkageBuff_b__0__, v31);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass71_0__RemoveLinkageBuff_b__1__, v32);
    sub_B16FFC(&BattleBuffData___c__DisplayClass71_0_TypeInfo, v33);
    byte_40FD3D4 = 1;
  }
  v34 = sub_B170CC(BattleBuffData___c__DisplayClass71_0_TypeInfo, endBuffs, isCreateDummy, isFamily, method);
  BattleBuffData___c__DisplayClass71_0___ctor((BattleBuffData___c__DisplayClass71_0_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_99;
  *(_BYTE *)(v34 + 16) = isFamily;
  *(_QWORD *)(v34 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 24), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  v118 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                   v41,
                                                                                                   v42,
                                                                                                   v43,
                                                                                                   v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v118,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v116 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v45,
                                                     v46,
                                                     v47,
                                                     v48);
  System_Collections_Generic_List_int____ctor(
    v116,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v53 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v34 + 32);
  if ( !v53 )
  {
    v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                               v49,
                                                                               v50,
                                                                               v51,
                                                                               v52);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v53,
      (Il2CppObject *)v34,
      Method_BattleBuffData___c__DisplayClass71_0__RemoveLinkageBuff_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v34 + 32) = v53;
    sub_B16F98((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
  }
  v60 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)endBuffs,
          (System_Func_TSource__bool__o *)v53,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v60 )
    goto LABEL_99;
  klass = v60->klass;
  v62 = v60;
  if ( *(_WORD *)&v60->klass->_2.bitflags1 )
  {
    v63 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v63;
      p_offset += 4;
      if ( v63 >= *(unsigned __int16 *)&v60->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AAFEF8(v60, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v66 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v62,
          *(_QWORD *)(p_method + 8));
  if ( !v66 )
    sub_B170D4();
  while ( 1 )
  {
    v67 = *(_QWORD *)v66;
    if ( *(_WORD *)(*(_QWORD *)v66 + 298LL) )
    {
      v68 = 0LL;
      v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v69 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v68;
        v69 += 4;
        if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v66 + 298LL) )
          goto LABEL_18;
      }
      v70 = v67 + 16LL * *v69 + 312;
    }
    else
    {
LABEL_18:
      v70 = sub_AAFEF8(v66, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8)) & 1) == 0 )
      break;
    v71 = *(_QWORD *)v66;
    if ( *(_WORD *)(*(_QWORD *)v66 + 298LL) )
    {
      v72 = 0LL;
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v73 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v72;
        v73 += 4;
        if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v66 + 298LL) )
          goto LABEL_25;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_25:
      v74 = sub_AAFEF8(v66, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v66, *(_QWORD *)(v74 + 8));
    if ( !v75 )
      sub_B170D4();
    v76 = *(System_Collections_Generic_IEnumerable_T__o **)(v75 + 128);
    if ( v76 && v76[1].monitor )
    {
      if ( !v116 )
        sub_B170D4();
      System_Collections_Generic_List_int___AddRange(
        v116,
        v76,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  v77 = *(_QWORD *)v66;
  if ( *(_WORD *)(*(_QWORD *)v66 + 298LL) )
  {
    v78 = 0LL;
    v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      ++v78;
      v79 += 4;
      if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v66 + 298LL) )
        goto LABEL_36;
    }
    v80 = v77 + 16LL * *v79 + 312;
  }
  else
  {
LABEL_36:
    v80 = sub_AAFEF8(v66, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v80)(v66, *(_QWORD *)(v80 + 8));
  v85 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B170CC(
                                                               System_Func_BattleBuffData_BuffData__int__bool__TypeInfo,
                                                               v81,
                                                               v82,
                                                               v83,
                                                               v84);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v85,
    (Il2CppObject *)v34,
    Method_BattleBuffData___c__DisplayClass71_0__RemoveLinkageBuff_b__0__,
    (const MethodInfo_2B74740 *)Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__);
  v86 = v116;
  if ( !v116 )
    goto LABEL_99;
  LODWORD(v87) = v116->fields._size;
  if ( (int)v87 >= 1 )
  {
    v88 = 0LL;
    while ( 1 )
    {
      if ( v88 >= (unsigned int)v87 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      activeList = this->fields.activeList;
      if ( !activeList )
        goto LABEL_99;
      size = activeList->fields._size;
      v115 = v88;
      v91 = v86->fields._items->m_Items[v88 + 1];
      if ( size - 1 >= 0 )
        break;
LABEL_72:
      passiveList = this->fields.passiveList;
      if ( !passiveList )
        goto LABEL_99;
      v105 = passiveList->fields._size;
      if ( v105 - 1 >= 0 )
      {
        v106 = v105 - 1;
        v107 = v105 - 2;
        do
        {
          if ( v106 >= (unsigned int)passiveList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v85 )
            break;
          v108 = passiveList->fields._items->m_Items[v106];
          if ( System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                 v85,
                 v108,
                 v91,
                 (const MethodInfo_2B74754 *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__) )
          {
            if ( !v108 )
              break;
            linkageTargetIndividualty = (System_Collections_Generic_IEnumerable_T__o *)v108->fields.linkageTargetIndividualty;
            if ( linkageTargetIndividualty && linkageTargetIndividualty[1].monitor )
              System_Collections_Generic_List_int___AddRange(
                v116,
                linkageTargetIndividualty,
                (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v108->fields.auraEffectId )
            {
              auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
              if ( !auraBuffList )
                break;
              if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                     auraBuffList,
                     (WarBoardManager_TaskList_o *)v108,
                     (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
              {
                v112 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
                if ( !v112 )
                  break;
                System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                  v112,
                  (WarBoardManager_TaskList_o *)v108,
                  (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
              }
            }
            BattleBuffData__RemoveClassIconEffectBuff(this, v108, v109);
            if ( !endBuffs )
              break;
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
                    (WarBoardManager_TaskList_o *)v108,
                    (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
            {
              if ( !v118 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v118,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v108,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
            v113 = this->fields.passiveList;
            if ( !v113 )
              break;
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v113,
              v107 + 1,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
          }
          if ( (v107 & 0x80000000) != 0 )
            goto LABEL_97;
          passiveList = this->fields.passiveList;
          --v106;
          --v107;
        }
        while ( passiveList );
LABEL_99:
        sub_B170D4();
      }
LABEL_97:
      v86 = v116;
      v87 = v116->fields._size;
      v88 = v115 + 1;
      if ( (__int64)(v115 + 1) >= v87 )
        return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v118;
    }
    v92 = size - 1;
    v93 = size - 2;
    while ( 1 )
    {
      if ( v92 >= (unsigned int)activeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v85 )
        goto LABEL_99;
      v94 = activeList->fields._items->m_Items[v92];
      if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
              v85,
              v94,
              v91,
              (const MethodInfo_2B74754 *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__) )
        goto LABEL_68;
      if ( !v94 )
        goto LABEL_99;
      v96 = (System_Collections_Generic_IEnumerable_T__o *)v94->fields.linkageTargetIndividualty;
      if ( v96 && v96[1].monitor )
        System_Collections_Generic_List_int___AddRange(
          v116,
          v96,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
      if ( v94->fields.auraEffectId )
      {
        v97 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
        if ( !v97 )
          goto LABEL_99;
        if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               v97,
               (WarBoardManager_TaskList_o *)v94,
               (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        {
          v98 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
          if ( !v98 )
            goto LABEL_99;
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            v98,
            (WarBoardManager_TaskList_o *)v94,
            (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        }
      }
      BattleBuffData__RemoveClassIconEffectBuff(this, v94, v95);
      if ( !endBuffs )
        goto LABEL_99;
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
              (WarBoardManager_TaskList_o *)v94,
              (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        if ( !v118 )
          goto LABEL_99;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v118,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      v99 = this->fields.activeList;
      if ( !v99 )
        goto LABEL_99;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v99,
        v92,
        (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      if ( !isCreateDummy )
        goto LABEL_68;
      DummyBuff = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleBuffData__CreateDummyBuff(
                                                                           v100,
                                                                           v94,
                                                                           v101);
      v103 = this->fields.activeList;
      if ( !v103 )
        goto LABEL_99;
      if ( (__int64)v92 < v103->fields._size )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.activeList,
        DummyBuff,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      if ( (v93 & 0x80000000) != 0 )
        goto LABEL_72;
LABEL_69:
      activeList = this->fields.activeList;
      --v92;
      --v93;
      if ( !activeList )
        goto LABEL_99;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
      v92,
      (XWeaponTrail_Element_o *)DummyBuff,
      (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__);
LABEL_68:
    if ( (v93 & 0x80000000) != 0 )
      goto LABEL_72;
    goto LABEL_69;
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v118;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__RemoveNoTurnBuff(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleLogic_o *v5; // x24
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x22
  BattleBuffData___c_c *v24; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_0; // x23
  BattleLogic_o *v27; // x19
  Il2CppObject *v28; // x24
  struct BattleBuffData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  BattleBuffData___c_c *v47; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x22
  struct BattleBuffData___c_StaticFields *v49; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_1; // x23
  BattleLogic_o *v51; // x27
  Il2CppObject *v52; // x24
  struct BattleBuffData___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_T__o *v60; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v66; // x23
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerable_T__o *v68; // x0
  const MethodInfo *v69; // x2
  BattleBuffData_o *v70; // x0
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x1

  v5 = logic;
  if ( (byte_40FD3D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleBuffData_checkBuffClear__, logic);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v13);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B16FFC(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__68_0__, v15);
    sub_B16FFC(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__68_1__, v16);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v17);
    byte_40FD3D1 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  logic,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  v24 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v24 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__68_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v27 = v5;
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v27 = v5;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__68_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v19,
                                                                          v20,
                                                                          v21,
                                                                          v22);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_0,
      v28,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__68_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v29 = BattleBuffData___c_TypeInfo->static_fields;
    v29->__9__68_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__68_0,
      (System_Int32_array **)_9__68_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v5 = v27;
  }
  if ( !passiveList )
    goto LABEL_30;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                         (System_Predicate_T__o *)_9__68_0,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v18 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    All,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v37 = this->fields.passiveList;
  v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v38,
                                                                   v39,
                                                                   v40,
                                                                   v41);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v42,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v37 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v37,
    (System_Predicate_T__o *)v42,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v47 = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v47 = BattleBuffData___c_TypeInfo;
  }
  v49 = v47->static_fields;
  _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v49->__9__68_1;
  if ( !_9__68_1 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v51 = v5;
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v49 = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v51 = v5;
    }
    v52 = (Il2CppObject *)v49->__9;
    _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v43,
                                                                          v44,
                                                                          v45,
                                                                          v46);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_1,
      v52,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__68_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v53 = BattleBuffData___c_TypeInfo->static_fields;
    v53->__9__68_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v53->__9__68_1,
      (System_Int32_array **)_9__68_1,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v5 = v51;
  }
  if ( !activeList )
    goto LABEL_30;
  v60 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__68_1,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    v60,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v61 = this->fields.activeList;
  v66 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v62,
                                                                   v63,
                                                                   v64,
                                                                   v65);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v66,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v61 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v61,
    (System_Predicate_T__o *)v66,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v68 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
                                                         0,
                                                         v67);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    v68,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
    v69);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v70,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
    v5,
    v71);
  if ( BattleBuffData__CheckInvalidSacrificeIndivArray(
         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
         v72) )
  {
    if ( v5 )
    {
      BattleLogic__updateFieldBuff(v5, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_30:
    sub_B170D4();
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__RemoveProgressingBuffList(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList,
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
  BattleBuffData_BuffData_array *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  BattleBuffData___c_c *v29; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__85_0; // x22
  Il2CppObject *v32; // x23
  struct BattleBuffData___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  BattleBuffData___c_c *v45; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  struct BattleBuffData___c_StaticFields *v47; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__85_1; // x22
  Il2CppObject *v49; // x23
  struct BattleBuffData___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_T__o *v57; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v63; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v69; // x22
  const MethodInfo *v70; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v71; // x19
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  _BOOL8 v74; // x0
  const MethodInfo *v75; // x3

  if ( (byte_40FD3DF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleBuffData_checkBuffClear__, linkedBuffList);
    sub_B16FFC(&BattleLogic_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v12);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B16FFC(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__85_0__, v14);
    sub_B16FFC(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__85_1__, v15);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v16);
    byte_40FD3DF = 1;
  }
  if ( !linkedBuffList )
    goto LABEL_32;
  v17 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)linkedBuffList,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleBuffData__syncLinkageBuffChangeParam(this, v17, v18);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  v29 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v29 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__85_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__85_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v24,
                                                                          v25,
                                                                          v26,
                                                                          v27);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__85_0,
      v32,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__85_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v33 = BattleBuffData___c_TypeInfo->static_fields;
    v33->__9__85_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__85_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__85_0,
      (System_Int32_array **)_9__85_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !passiveList )
    goto LABEL_32;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                         (System_Predicate_T__o *)_9__85_0,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v23 )
    goto LABEL_32;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    All,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v45 = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v45 = BattleBuffData___c_TypeInfo;
  }
  v47 = v45->static_fields;
  _9__85_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v47->__9__85_1;
  if ( !_9__85_1 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v47 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__85_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v41,
                                                                          v42,
                                                                          v43,
                                                                          v44);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__85_1,
      v49,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__85_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v50 = BattleBuffData___c_TypeInfo->static_fields;
    v50->__9__85_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__85_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v50->__9__85_1,
      (System_Int32_array **)_9__85_1,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !activeList )
    goto LABEL_32;
  v57 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__85_1,
                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    v57,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v58 = this->fields.passiveList;
  v63 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v59,
                                                                   v60,
                                                                   v61,
                                                                   v62);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v63,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v58
    || (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v58,
          (System_Predicate_T__o *)v63,
          (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__),
        v64 = this->fields.activeList,
        v69 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v65,
                                                                         v66,
                                                                         v67,
                                                                         v68),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v69,
          (Il2CppObject *)this,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v64) )
  {
LABEL_32:
    sub_B170D4();
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v64,
    (System_Predicate_T__o *)v69,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v71 = BattleBuffData__removeLinkageBuff(
          this,
          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
          0,
          v70);
  if ( BattleBuffData__CheckInvalidSacrificeIndivArray(
         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
         v72)
    || (v74 = BattleBuffData__CheckInvalidSacrificeIndivArray(v71, v73)) )
  {
    if ( (BYTE3(BattleLogic_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleLogic_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleLogic_TypeInfo);
    BattleLogic__DoUpdateFieldBuff(0LL);
  }
  return BattleBuffData__MakeRemoveBuffInfo(
           (BattleBuffData_o *)v74,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
           v71,
           v75);
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
  Il2CppObject *current; // x21
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  v6 = this;
  if ( (byte_40FD432 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, buffList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    this = (BattleBuffData_o *)sub_B16FFC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v11);
    byte_40FD432 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  SkillTypeBuff = BattleBuffData__GetSkillTypeBuff(this, buffList, skillTypes, method);
  if ( !SkillTypeBuff )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SkillTypeBuff,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !buffList )
      sub_B170D4();
    current = v18.fields.current;
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)buffList,
      (WarBoardManager_TaskList_o *)v18.fields.current,
      (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    if ( !current )
      sub_B170D4();
    if ( LODWORD(current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B170D4();
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             auraBuffList,
             (WarBoardManager_TaskList_o *)current,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v16 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
        if ( !v16 )
          sub_B170D4();
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v16,
          (WarBoardManager_TaskList_o *)current,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
      }
    }
    BattleBuffData__RemoveClassIconEffectBuff(v6, (BattleBuffData_BuffData_o *)current, v14);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_40FD3B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, buff);
    byte_40FD3B5 = 1;
  }
  updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    updateWaitIntervalBuffList,
    (WarBoardManager_TaskList_o *)buff,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
}


void __fastcall BattleBuffData__ResetCommandAssistBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v7; // x19
  unsigned int v8; // w21
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x20

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v7 = PassiveList;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        sub_B17100(PassiveList, v4, v5);
        sub_B170A0();
      }
      v9 = &v7->obj.klass + (int)v8;
      v10 = v9[4];
      if ( !v10 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                       (BattleBuffData_BuffData_o *)v9[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        BYTE1(v10->vtable[4].methodPtr) = 0;
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall BattleBuffData__ResetCommandCodeBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v7; // x19
  unsigned int v8; // w21
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x20

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v7 = PassiveList;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        sub_B17100(PassiveList, v4, v5);
        sub_B170A0();
      }
      v9 = &v7->obj.klass + (int)v8;
      v10 = v9[4];
      if ( !v10 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCodeBuff(
                                                       (BattleBuffData_BuffData_o *)v9[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        LOBYTE(v10->_1.generic_class) = 0;
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall BattleBuffData__ResetNotTakeOverBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleBuffData___c_c *v10; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__69_0; // x20
  Il2CppObject *v13; // x21
  struct BattleBuffData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_40FD3D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v7);
    sub_B16FFC(&Method_BattleBuffData___c__ResetNotTakeOverBuff_b__69_0__, v8);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v9);
    byte_40FD3D2 = 1;
  }
  v10 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v10 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__69_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__69_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__69_0,
      v13,
      Method_BattleBuffData___c__ResetNotTakeOverBuff_b__69_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v14 = BattleBuffData___c_TypeInfo->static_fields;
    v14->__9__69_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__69_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__69_0,
      (System_Int32_array **)_9__69_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__69_0,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.passiveList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)_9__69_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__ResetTargetUseBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        bool isIntervalOnly,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
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
  __int64 v27; // x3
  __int64 v28; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v43; // x21
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  BattleBuffData_BuffData_o *v52; // x22
  const MethodInfo *v53; // x2
  BattleBuffData_IntervalData_o *intervalData; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0

  if ( (byte_40FD44C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, *(_QWORD *)&targetType);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass242_0__ResetTargetUseBuff_b__0__, v14);
    sub_B16FFC(&BattleBuffData___c__DisplayClass242_0_TypeInfo, v15);
    byte_40FD44C = 1;
  }
  v16 = sub_B170CC(BattleBuffData___c__DisplayClass242_0_TypeInfo, *(_QWORD *)&targetType, isIntervalOnly, method, v4);
  BattleBuffData___c__DisplayClass242_0___ctor((BattleBuffData___c__DisplayClass242_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_42;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v16 + 24) = targetType;
  v24 = BattleBuffData__AllBuffEnumerable(this, v23);
  v29 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v16 + 32);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !v29 )
  {
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                               v25,
                                                                               v26,
                                                                               v27,
                                                                               v28);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v29,
      (Il2CppObject *)v16,
      Method_BattleBuffData___c__DisplayClass242_0__ResetTargetUseBuff_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v16 + 32) = v29;
    sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)v29, v31, v32, v33, v34, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v30,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v37 )
LABEL_42:
    sub_B170D4();
  klass = v37->klass;
  v39 = v37;
  if ( *(_WORD *)&v37->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v40;
      p_offset += 4;
      if ( v40 >= *(unsigned __int16 *)&v37->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AAFEF8(v37, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v39,
          *(_QWORD *)(p_method + 8));
  if ( !v43 )
    sub_B170D4();
  while ( 1 )
  {
    v44 = *(_QWORD *)v43;
    if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
          goto LABEL_18;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_18:
      v47 = sub_AAFEF8(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v43;
    if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v50 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
          goto LABEL_25;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_25:
      v51 = sub_AAFEF8(v43, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v52 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
    BattleBuffData__RemoveUpdateWaitIntervalBuff(this, v52, v53);
    if ( isIntervalOnly )
    {
      if ( !v52 )
        sub_B170D4();
      intervalData = v52->fields.intervalData;
      if ( intervalData )
        BattleBuffData_IntervalData__Reset(intervalData, 0LL);
    }
    else
    {
      if ( !v52 )
        sub_B170D4();
      BattleBuffData_BuffData__RevertUnused(v52, 1, 0LL);
    }
  }
  v55 = *(_QWORD *)v43;
  if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
  {
    v56 = 0LL;
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
        goto LABEL_37;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_37:
    v58 = sub_AAFEF8(v43, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v58)(v43, *(_QWORD *)(v58 + 8));
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x25
  unsigned int v21; // w27
  BattleBuffData_BuffData_o *v22; // x26
  const MethodInfo *v23; // x3
  __int64 commandAssistId; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FD42A & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___, selectCommandAssistId);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD42A = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_24;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v17, v18);
        sub_B170A0();
      }
      v22 = PassiveList->m_Items[v21];
      if ( !v22 )
        break;
      if ( !v22->fields._isRemove )
      {
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                                            v22,
                                                                            0LL);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        {
          commandAssistId = v22->fields.commandAssistId;
          v22->fields.isActiveCA = 0;
          if ( commandAssistId == selectCommandAssistId && (cardIndex == -1 || v22->fields.cardIndex == cardIndex) )
          {
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BattleBuffData__checkBuffSuccessful(
                                                                                this,
                                                                                v22,
                                                                                1,
                                                                                v23);
            if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 && v22->fields.reCharge <= 0 )
            {
              v22->fields.isActiveCA = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandAssistBuff(
                  (BattleBuffData_o *)MasterData_WarQuestSelectionMaster,
                  v22,
                  v18);
              if ( !v20 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v20,
                                                                                  &entity,
                                                                                  v22->fields.buffId,
                                                                                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v22,
                  (const MethodInfo_2D39FFC *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v21 >= max_length )
        return;
    }
LABEL_24:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__SetCommandCardBuffActive(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        bool isCheckBuffSuccess,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v17; // x4
  signed __int64 size; // x8
  unsigned __int64 v19; // x23
  bool v20; // w21

  if ( (byte_40FD43E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, commandData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_40FD43E = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  commandData,
                                                                                                  isCheckBuffSuccess,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v13);
  if ( !v12 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v15);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  LODWORD(size) = v12->fields._size;
  if ( (int)size >= 1 )
  {
    v19 = 0LL;
    v20 = isCheckBuffSuccess;
    do
    {
      if ( v19 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      BattleBuffData__CheckCommandCardBuffActive(
        this,
        commandData,
        (BattleBuffData_BuffData_o *)v12->fields._items->m_Items[v19],
        v20,
        v17);
      size = v12->fields._size;
      ++v19;
    }
    while ( (__int64)v19 < size );
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x24
  unsigned int v19; // w26
  BattleBuffData_BuffData_o *v20; // x25
  const MethodInfo *v21; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FD428 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___, selectUserCCId);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FD428 = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_22;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v15, v16);
        sub_B170A0();
      }
      v20 = PassiveList->m_Items[v19];
      if ( !v20 )
        break;
      if ( !v20->fields._isRemove )
      {
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BattleBuffData_BuffData__isCommandCodeBuff(
                                                                            v20,
                                                                            0LL);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        {
          v20->fields.isActiveCC = 0;
          MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BattleBuffData_BuffData__IsMineCommandCode(
                                                                              v20,
                                                                              selectUserCCId,
                                                                              0LL);
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
          {
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BattleBuffData__checkBuffSuccessful(
                                                                                this,
                                                                                v20,
                                                                                1,
                                                                                v21);
            if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 && v20->fields.reCharge <= 0 )
            {
              v20->fields.isActiveCC = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandCodeBuff(
                  (BattleBuffData_o *)MasterData_WarQuestSelectionMaster,
                  v20,
                  v16);
              if ( !v18 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v18,
                                                                                  &entity,
                                                                                  v20->fields.buffId,
                                                                                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v20,
                  (const MethodInfo_2D39FFC *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
LABEL_22:
    sub_B170D4();
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
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD443 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, servantArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v7);
    byte_40FD443 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    if ( SLODWORD(v9.fields.current[17].klass) >= 1 )
      BattleBuffData_BuffData__SetBuffNoActState((BattleBuffData_BuffData_o *)v9.fields.current, servantArray, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  WarBoardUiData_SaveData_array *v13; // x0
  WarBoardUiData_SaveData_array *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  BattleBuffData_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  const MethodInfo_2B6AB54 **v25; // x28
  unsigned __int64 v26; // x26
  WarBoardUiData_SaveData_o **m_Items; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  BattleBuffData_o *v29; // x8
  _BOOL4 v30; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x25
  WarBoardUiData_SaveData_o **v32; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x27
  WarBoardUiData_SaveData_array *v34; // x23
  const MethodInfo_2B6AB54 **v35; // x22
  BattleBuffData_o *v36; // x28
  EventMissionProgressRequest_Argument_ProgressData_o *DummyBuff; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v38; // x0
  BattleBuffData_o *v39; // x0
  const MethodInfo *v40; // x3
  RemovedBuffInfo_o *v41; // x0
  const MethodInfo *v42; // x2
  RemovedBuffInfo_o *v43; // x20
  System_Func_BattleBuffData_BuffData__bool__o *v45; // [xsp+8h] [xbp-58h]

  v4 = isCreateDummy;
  v5 = checkFunc;
  if ( (byte_40FD3EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, checkFunc);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_40FD3EF = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_20;
  v13 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_20;
  v14 = v13;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v14 )
    goto LABEL_20;
  v24 = *(_QWORD *)&v14->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = (const MethodInfo_2B6AB54 **)&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__;
    v26 = 0LL;
    m_Items = v14->m_Items;
    v45 = v5;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v24 )
      {
        sub_B17100(v20, v21, v22);
        sub_B170A0();
      }
      if ( !v5 )
        break;
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v26];
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(v5, (BattleBuffData_BuffData_o *)v28, *v25) )
      {
        if ( !v19 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          v28,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( v4 )
        {
          v29 = this;
          v30 = v4;
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29->fields.activeList;
          v32 = m_Items;
          v33 = v19;
          v34 = v14;
          v35 = v25;
          v36 = v29;
          DummyBuff = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleBuffData__CreateDummyBuff(
                                                                               v20,
                                                                               (BattleBuffData_BuffData_o *)v28,
                                                                               v22);
          if ( !v31 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v31,
            DummyBuff,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v4 = v30;
          this = v36;
          v25 = v35;
          v14 = v34;
          v19 = v33;
          m_Items = v32;
          v5 = v45;
        }
      }
      else
      {
        v38 = this->fields.activeList;
        if ( !v38 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38,
          v28,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v24) = v14->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  v39 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v19,
                              v4,
                              v23);
  v41 = BattleBuffData__MakeRemoveBuffInfo(
          v39,
          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v19,
          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v39,
          v40);
  if ( !v41 )
    goto LABEL_20;
  v43 = v41;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(this, v41->fields._RemovedAllBuffList_k__BackingField, v42);
  return v43;
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromDeadActorId(
        BattleBuffData_o *this,
        int32_t actorId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData___c__DisplayClass107_0_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  const MethodInfo *v17; // x3

  if ( (byte_40FD3EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, *(_QWORD *)&actorId);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass107_0__SubBuffFromDeadActorId_b__0__, v9);
    sub_B16FFC(&BattleBuffData___c__DisplayClass107_0_TypeInfo, v10);
    byte_40FD3EE = 1;
  }
  v11 = (BattleBuffData___c__DisplayClass107_0_o *)sub_B170CC(
                                                     BattleBuffData___c__DisplayClass107_0_TypeInfo,
                                                     *(_QWORD *)&actorId,
                                                     isCreateDummy,
                                                     method,
                                                     v4);
  BattleBuffData___c__DisplayClass107_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.actorId = actorId;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_BattleBuffData___c__DisplayClass107_0__SubBuffFromDeadActorId_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v16,
           isCreateDummy,
           v17);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromType(
        BattleBuffData_o *this,
        int32_t buffId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  BuffMaster_o *buffMst; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21
  const MethodInfo *v25; // x3

  if ( (byte_40FD3ED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, *(_QWORD *)&buffId);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass106_0__SubBuffFromType_b__0__, v9);
    sub_B16FFC(&BattleBuffData___c__DisplayClass106_0_TypeInfo, v10);
    byte_40FD3ED = 1;
  }
  v11 = sub_B170CC(BattleBuffData___c__DisplayClass106_0_TypeInfo, *(_QWORD *)&buffId, isCreateDummy, method, v4);
  BattleBuffData___c__DisplayClass106_0___ctor((BattleBuffData___c__DisplayClass106_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (buffMst = BattleBuffData__get_buffMst(this, v18)) == 0LL) )
  {
    sub_B170D4();
  }
  *(_DWORD *)(v11 + 24) = BuffMaster__GetBuffType(buffMst, buffId, -1, 0LL);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v20,
                                                                             v21,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_BattleBuffData___c__DisplayClass106_0__SubBuffFromType_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v24,
           isCreateDummy,
           v25);
}


void __fastcall BattleBuffData__UpdateBaseAddOrder(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  BattleBuffData___c_c *v14; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__211_0; // x21
  Il2CppObject *v17; // x22
  struct BattleBuffData___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  BattleBuffData___c_c *v27; // x0
  struct BattleBuffData___c_StaticFields *v28; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__211_1; // x22
  Il2CppObject *v30; // x23
  BattleServantConfConponent_o *p__9__211_1; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t v38; // w21

  if ( (byte_40FD436 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, method);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v6);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v8);
    sub_B16FFC(&System_Math_TypeInfo, v9);
    sub_B16FFC(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__211_0__, v10);
    sub_B16FFC(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__211_1__, v11);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v12);
    byte_40FD436 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_31;
  if ( activeList->fields._size < 1 )
  {
    v25 = 0;
  }
  else
  {
    v14 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v14 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__211_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__211_0;
    if ( !_9__211_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__211_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__211_0,
        v17,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__211_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v18 = BattleBuffData___c_TypeInfo->static_fields;
      v18->__9__211_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__211_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v18->__9__211_0,
        (System_Int32_array **)_9__211_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
            (System_Func_TSource__int__o *)_9__211_0,
            (const MethodInfo_19BCDAC *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList )
LABEL_31:
    sub_B170D4();
  if ( passiveList->fields._size < 1 )
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
    v28 = v27->static_fields;
    _9__211_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v28->__9__211_1;
    if ( !_9__211_1 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v28 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)v28->__9;
      _9__211_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__211_1,
        v30,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__211_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      p__9__211_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__211_1;
      p__9__211_1->klass = (BattleServantConfConponent_c *)_9__211_1;
      sub_B16F98(p__9__211_1, (System_Int32_array **)_9__211_1, v32, v33, v34, v35, v36, v37);
    }
    v38 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
            (System_Func_TSource__int__o *)_9__211_1,
            (const MethodInfo_19BCDAC *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this->fields.addBuffOrder = System_Math__Max_44463768(v25, v38, 0LL) + 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__UpdateBuffAddOrder(
        BattleBuffData_o *this,
        int32_t addPassiveMaxOrder,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  BattleBuffData___c__DisplayClass210_0_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  BattleBuffData___c_c *v27; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__210_0; // x22
  Il2CppObject *v30; // x23
  struct BattleBuffData___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t v38; // w0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_passiveList; // x25
  int32_t v41; // w22
  BattleBuffData___c_c *v42; // x0
  struct BattleBuffData___c_StaticFields *v43; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__210_1; // x23
  Il2CppObject *v45; // x24
  struct BattleBuffData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w21
  int32_t v54; // w0
  struct BattleBuffData___c_StaticFields *v55; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__210_2; // x22
  Il2CppObject *v57; // x23
  struct BattleBuffData___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v65; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v66; // x21
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v67; // x19
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v72; // x21

  if ( (byte_40FD435 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&addPassiveMaxOrder);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___, v8);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v9);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v12);
    sub_B16FFC(&System_Math_TypeInfo, v13);
    sub_B16FFC(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__210_0__, v14);
    sub_B16FFC(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__210_1__, v15);
    sub_B16FFC(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__210_2__, v16);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass210_0__UpdateBuffAddOrder_b__3__, v17);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass210_0__UpdateBuffAddOrder_b__4__, v18);
    sub_B16FFC(&BattleBuffData___c__DisplayClass210_0_TypeInfo, v19);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v20);
    byte_40FD435 = 1;
  }
  v21 = (BattleBuffData___c__DisplayClass210_0_o *)sub_B170CC(
                                                     BattleBuffData___c__DisplayClass210_0_TypeInfo,
                                                     *(_QWORD *)&addPassiveMaxOrder,
                                                     method,
                                                     v3,
                                                     v4);
  BattleBuffData___c__DisplayClass210_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_48;
  v21->fields.addPassiveMaxOrder = addPassiveMaxOrder;
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
    v41 = 0;
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
    _9__210_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__210_0;
    if ( !_9__210_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__210_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    v22,
                                                                                    v23,
                                                                                    v24,
                                                                                    v25);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__210_0,
        v30,
        Method_BattleBuffData___c__UpdateBuffAddOrder_b__210_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v31 = BattleBuffData___c_TypeInfo->static_fields;
      v31->__9__210_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__210_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v31->__9__210_0,
        (System_Int32_array **)_9__210_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
            (System_Func_TSource__int__o *)_9__210_0,
            (const MethodInfo_19BD4E4 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    p_passiveList = &this->fields.passiveList;
    passiveList = this->fields.passiveList;
    if ( !passiveList )
      goto LABEL_48;
    v41 = v38;
  }
  if ( passiveList->fields._size >= 1 )
  {
    v42 = BattleBuffData___c_TypeInfo;
    if ( v41 <= 0 )
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v42 = BattleBuffData___c_TypeInfo;
      }
      v55 = v42->static_fields;
      _9__210_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v55->__9__210_2;
      if ( !_9__210_2 )
      {
        if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v55 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v57 = (Il2CppObject *)v55->__9;
        _9__210_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                      System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                      v22,
                                                                                      v23,
                                                                                      v24,
                                                                                      v25);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__210_2,
          v57,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__210_2__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        v58 = BattleBuffData___c_TypeInfo->static_fields;
        v58->__9__210_2 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__210_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v58->__9__210_2,
          (System_Int32_array **)_9__210_2,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
      }
      v54 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__210_2,
              (const MethodInfo_19BD4E4 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    }
    else
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v42 = BattleBuffData___c_TypeInfo;
      }
      v43 = v42->static_fields;
      _9__210_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v43->__9__210_1;
      if ( !_9__210_1 )
      {
        if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v43 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v45 = (Il2CppObject *)v43->__9;
        _9__210_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                      System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                      v22,
                                                                                      v23,
                                                                                      v24,
                                                                                      v25);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__210_1,
          v45,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__210_1__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        v46 = BattleBuffData___c_TypeInfo->static_fields;
        v46->__9__210_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__210_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v46->__9__210_1,
          (System_Int32_array **)_9__210_1,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      v53 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__210_1,
              (const MethodInfo_19BD4E4 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v54 = System_Math__Min_44418752(v41, v53, 0LL);
    }
    v41 = v54;
  }
  if ( v41 <= v21->fields.addPassiveMaxOrder )
  {
    v65 = this->fields.activeList;
    v66 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                 v22,
                                                                                 v23,
                                                                                 v24,
                                                                                 v25);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v66,
      (Il2CppObject *)v21,
      Method_BattleBuffData___c__DisplayClass210_0__UpdateBuffAddOrder_b__3__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    if ( v65 )
    {
      System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
        (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v65,
        (System_Action_T__o *)v66,
        (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      v67 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)*p_passiveList;
      v72 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                   System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                   v68,
                                                                                   v69,
                                                                                   v70,
                                                                                   v71);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v72,
        (Il2CppObject *)v21,
        Method_BattleBuffData___c__DisplayClass210_0__UpdateBuffAddOrder_b__4__,
        (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      if ( v67 )
      {
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v67,
          (System_Action_T__o *)v72,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
        return;
      }
    }
LABEL_48:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__UpdateForceAllBuffNoAct(
        BattleBuffData_o *this,
        int32_t showState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData___c__DisplayClass144_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_40FD408 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&showState);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v8);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass144_0__UpdateForceAllBuffNoAct_b__0__, v9);
    sub_B16FFC(&BattleBuffData___c__DisplayClass144_0_TypeInfo, v10);
    byte_40FD408 = 1;
  }
  v11 = (BattleBuffData___c__DisplayClass144_0_o *)sub_B170CC(
                                                     BattleBuffData___c__DisplayClass144_0_TypeInfo,
                                                     *(_QWORD *)&showState,
                                                     method,
                                                     v3,
                                                     v4);
  BattleBuffData___c__DisplayClass144_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.showState = showState,
        v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                     v12,
                                                                                     v13,
                                                                                     v14,
                                                                                     v15),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v16,
          (Il2CppObject *)v11,
          Method_BattleBuffData___c__DisplayClass144_0__UpdateForceAllBuffNoAct_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        (passiveList = this->fields.passiveList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v16,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.activeList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)v16,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAdd,
        const MethodInfo *method)
{
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
  __int64 v19; // x3
  __int64 v20; // x4
  BattleBuffData___c_c *v21; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__89_0; // x20
  Il2CppObject *v24; // x21
  struct BattleBuffData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40FD3E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, buff);
    sub_B16FFC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v11);
    sub_B16FFC(&Method_BattleBuffData___c__UpdateForceBuff_b__89_0__, v12);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v13);
    byte_40FD3E3 = 1;
  }
  if ( !buff )
    goto LABEL_21;
  v14 = 32LL;
  if ( buff->fields.passive )
    v14 = 24LL;
  v15 = *(System_Collections_Generic_List_WarBoardManager_TaskList__o **)((char *)&this->klass + v14);
  if ( !v15 )
LABEL_21:
    sub_B170D4();
  v16 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          v15,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
  if ( isAdd )
  {
    if ( !v16 )
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  else if ( v16 )
  {
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      v15,
      (WarBoardManager_TaskList_o *)buff,
      (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
  }
  v21 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v21 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__89_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__89_0;
  if ( !_9__89_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__89_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                           v17,
                                                                           v18,
                                                                           v19,
                                                                           v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__89_0,
      v24,
      Method_BattleBuffData___c__UpdateForceBuff_b__89_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v25 = BattleBuffData___c_TypeInfo->static_fields;
    v25->__9__89_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__89_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__89_0,
      (System_Int32_array **)_9__89_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__89_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
}


void __fastcall BattleBuffData__UpdateForceNoField(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleBuffData___c_c *v10; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__222_0; // x20
  Il2CppObject *v13; // x21
  BattleServantConfConponent_o *p__9__222_0; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_40FD43C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v7);
    sub_B16FFC(&Method_BattleBuffData___c__UpdateForceNoField_b__222_0__, v8);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v9);
    byte_40FD43C = 1;
  }
  v10 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v10 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__222_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__222_0;
  if ( !_9__222_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__222_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__222_0,
      v13,
      Method_BattleBuffData___c__UpdateForceNoField_b__222_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    p__9__222_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__222_0;
    p__9__222_0->klass = (BattleServantConfConponent_c *)_9__222_0;
    sub_B16F98(p__9__222_0, (System_Int32_array **)_9__222_0, v15, v16, v17, v18, v19, v20);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__222_0,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.passiveList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)_9__222_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
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
  __int64 v4; // x4
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x21
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  Il2CppObject *current; // x20
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v33; // x25
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FD3DE & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, svtData);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    byte_40FD3DE = 1;
  }
  memset(&v46, 0, sizeof(v46));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B170CC(
                                                                                   System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                   svtData,
                                                                                   *(_QWORD *)&funcIndex,
                                                                                   method,
                                                                                   v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v25 = sub_B170CC(BattleActionData_BuffData_TypeInfo, v21, v22, v23, v24);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v25, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v26);
  if ( !v20 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v28);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B170D4();
    if ( !BYTE2(v46.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v41);
      if ( !buffMst )
        sub_B170D4();
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v33 = Entity;
      if ( !Entity )
        sub_B170D4();
      if ( Entity->fields.type == 32 && BuffEntity__getDamageRelease(Entity, 0LL) >= 1 )
      {
        LODWORD(current[1].monitor) = 0;
        if ( !v25 )
          sub_B170D4();
        *(_DWORD *)(v25 + 16) = funcIndex;
        if ( !svtData )
          sub_B170D4();
        *(_DWORD *)(v25 + 40) = svtData->fields.uniqueId;
        DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v33, 0LL);
        *(_QWORD *)(v25 + 56) = DamageReleaseText;
        sub_B16F98((BattleServantConfConponent_o *)(v25 + 56), DamageReleaseText, v35, v36, v37, v38, v39, v40);
        *(_DWORD *)(v25 + 68) = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v42);
  return (BattleActionData_BuffData_o *)v25;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleBuffData__UseProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        bool doTDamage,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  BattleActionData_o *v26; // x21
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v29; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v31; // x1
  Il2CppObject *current; // x25
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x25
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FD3DD & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, svtData);
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v16);
    byte_40FD3DD = 1;
  }
  memset(&v52, 0, sizeof(v52));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B170CC(
                                                                                   System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                   svtData,
                                                                                   doTDamage,
                                                                                   method,
                                                                                   v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v26 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v22, v23, v24, v25);
  BattleActionData___ctor(v26, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v27);
  if ( !v21 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v29);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v21,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v52.fields.current;
    if ( !v52.fields.current )
      sub_B170D4();
    if ( !BYTE2(v52.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v31);
      if ( !buffMst )
        sub_B170D4();
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v35 = Entity;
      if ( !Entity )
        sub_B170D4();
      if ( Entity->fields.type == 32
        && BuffEntity__getDamageRelease(Entity, 0LL) >= 1
        && (BuffEntity__getDamageRelease(v35, 0LL) == 2 || !doTDamage) )
      {
        LODWORD(current[1].monitor) = 0;
        if ( !svtData )
          sub_B170D4();
        if ( !v26 )
          sub_B170D4();
        v26->fields.targetId = svtData->fields.uniqueId;
        v40 = sub_B170CC(BattleActionData_BuffData_TypeInfo, v36, v37, v38, v39);
        BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v40, 0LL);
        if ( !v40 )
          sub_B170D4();
        *(_DWORD *)(v40 + 40) = svtData->fields.uniqueId;
        DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v35, 0LL);
        *(_QWORD *)(v40 + 56) = DamageReleaseText;
        sub_B16F98((BattleServantConfConponent_o *)(v40 + 56), DamageReleaseText, v42, v43, v44, v45, v46, v47);
        *(_DWORD *)(v40 + 68) = 1;
        *(_BYTE *)(v40 + 82) = 1;
        *(_BYTE *)(v40 + 169) = 1;
        BattleActionData__setBuffData(v26, (BattleActionData_BuffData_o *)v40, 0LL, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v48);
  return v26;
}


void __fastcall BattleBuffData__UsedProgressing(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  signed int max_length; // w8
  unsigned int v14; // w23
  BattleBuffData_BuffData_o *v15; // x22
  int32_t count; // w8
  bool v17; // vf
  int v18; // w8

  if ( (byte_40FD3D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, checkList);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_40FD3D9 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 checkList,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkList )
    goto LABEL_17;
  max_length = checkList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v15 = checkList->m_Items[v14];
      if ( !v15 )
        break;
      if ( v15->fields.isDecide )
      {
        if ( v15->fields.isUse )
        {
          count = v15->fields.count;
          v17 = __OFSUB__(count, 1);
          v18 = count - 1;
          if ( v18 < 0 == v17 )
          {
            v15->fields.count = v18;
            v10 = BattleBuffData_BuffData__IslinkageTarget(v15, 0LL);
            if ( v10 )
            {
              if ( !v9 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v9,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
        v15->fields.isUse = 0;
        v15->fields.isDecide = 0;
      }
      max_length = checkList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_16:
  BattleBuffData__RemoveProgressingBuffList(this, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9, v12);
}


void __fastcall BattleBuffData___AddForceBuff_b__87_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 1, v3);
}


void __fastcall BattleBuffData___DelForceBuff_b__88_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 0, v3);
}


bool __fastcall BattleBuffData___GetFixBuffArray_b__183_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  return !BattleBuffData__IsUnfix(this, buff, method);
}


bool __fastcall BattleBuffData___updateAuraBuffList_b__38_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *aura,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *conditionalAuraBuff; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *activeList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *passiveList; // x0

  if ( (byte_40FD456 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, aura);
    byte_40FD456 = 1;
  }
  conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.conditionalAuraBuff;
  if ( !conditionalAuraBuff )
    goto LABEL_11;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          conditionalAuraBuff,
          (WarBoardManager_TaskList_o *)aura,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    activeList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
    if ( activeList )
    {
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             activeList,
             (WarBoardManager_TaskList_o *)aura,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        return 0;
      }
      passiveList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
      if ( passiveList )
        return !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  passiveList,
                  (WarBoardManager_TaskList_o *)aura,
                  (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    }
LABEL_11:
    sub_B170D4();
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
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *classIconAuraEffectBuffList; // x0
  int32_t addBuffOrder; // w1
  System_Collections_Generic_List_int__o *unfixedBuffList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_40FD3E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    byte_40FD3E0 = 1;
  }
  if ( BattleBuffData__checkConditions(this, buff, (const MethodInfo *)fieldflg) )
  {
    if ( !buff )
      goto LABEL_22;
    BattleBuffData_BuffData__onState(buff, 32, 0LL);
  }
  if ( !fieldflg )
    BattleBuffData__OnStateWithAuraConditionCheck(this, buff, 1, v10);
  if ( !buff )
LABEL_22:
    sub_B170D4();
  if ( buff->fields.auraEffectId )
  {
    auraBuffList = this->fields.auraBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)auraBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  if ( buff->fields.classIconAuraEffectId )
  {
    classIconAuraEffectBuffList = this->fields.classIconAuraEffectBuffList;
    if ( !classIconAuraEffectBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)classIconAuraEffectBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  addBuffOrder = this->fields.addBuffOrder;
  this->fields.addBuffOrder = addBuffOrder + 1;
  buff->fields.addOrder = addBuffOrder;
  if ( unFix )
  {
    unfixedBuffList = this->fields.unfixedBuffList;
    if ( !unfixedBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_int___Add(
      unfixedBuffList,
      addBuffOrder,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( !buff->fields.passive )
  {
    activeList = this->fields.activeList;
    if ( activeList )
      goto LABEL_20;
    goto LABEL_22;
  }
  activeList = this->fields.passiveList;
  if ( !activeList )
    goto LABEL_22;
LABEL_20:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
  if ( (byte_40FD406 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_40FD406 = 1;
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
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)logic, 0LL, 0LL) )
      {
        if ( !logic )
          sub_B170D4();
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

  if ( (byte_40FD412 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40FD412 = 1;
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

  if ( (byte_40FD417 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_40FD417 = 1;
  }
  plusMinus = 0;
  v13 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)checkIndividualities);
  if ( !v13 )
    sub_B170D4();
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
    p_method = sub_AAFEF8(v13, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_B170D4();
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
      v23 = sub_AAFEF8(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v27 = sub_AAFEF8(v19, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v28 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( !v28 )
      sub_B170D4();
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
    v37 = sub_AAFEF8(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v19, *(_QWORD *)(v37 + 8));
  if ( v39 == 139 )
    return 0;
  return v33;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkActBuff_31056148(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v9; // [xsp+0h] [xbp-30h]
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD413 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40FD413 = 1;
  }
  value = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B170D4();
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


// local variable allocation has failed, the output may be wrong!
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

  if ( !bufflist )
LABEL_13:
    sub_B170D4();
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
      sub_B17100(this, bufflist, isRec);
      sub_B170A0();
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
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  int v22; // w19
  BuffEntity_o *Entity; // x22
  int32_t type; // w23
  int32_t v25; // w23
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

  if ( (byte_40FD3B1 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, buffList);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FD3B1 = 1;
  }
  v30 = buffList;
  memset(&v35, 0, sizeof(v35));
  pal = 0;
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___),
        v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v17, v18, v19, v20),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v21,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__),
        !v21) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.passiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.activeList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v21,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v22 = 0;
  v35 = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !v35.fields.current )
      sub_B170D4();
    if ( !BYTE2(v35.fields.current[23].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)v35.fields.current[1].klass,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        pal = 0;
        type = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(81, type, 0LL) )
          goto LABEL_19;
        v25 = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(79, v25, 0LL) )
        {
LABEL_19:
          if ( BuffEntity__isCondition(Entity, 2, &pal, 0LL) )
          {
            if ( !v30 )
              sub_B170D4();
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v31,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
            v33 = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v33,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
            {
              current = v33.fields.current;
              if ( !v33.fields.current )
                sub_B170D4();
              if ( !BYTE2(v33.fields.current[23].klass) )
              {
                v27 = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int32_t)v33.fields.current[1].klass,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( SLODWORD(current[8].monitor) >= 1 )
                {
                  if ( !v27 )
                    sub_B170D4();
                  if ( BuffEntity__checkBuffType(v27, 41, 0LL) && HIDWORD(current[1].monitor) == pal )
                  {
                    this->fields.resumptionHpFromLossMaxHp += LODWORD(current[8].monitor);
                    LODWORD(current[8].monitor) = 0;
                    break;
                  }
                }
              }
            }
            *(_DWORD *)&v31[4 * v22 + 24] = 259;
            v28 = ++v32;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v33,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
            v22 = 0;
            if ( v28 )
            {
              v22 = v28;
              if ( *(_DWORD *)&v31[4 * v28 + 20] == 259 )
              {
                v22 = v28 - 1;
                v32 = v28 - 1;
              }
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v31[4 * v22 + 24] = 287;
  v29 = ++v32;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v29 && *(_DWORD *)&v31[4 * v29 + 20] == 287 )
    v32 = v29 - 1;
}


bool __fastcall BattleBuffData__checkAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  unsigned __int64 v6; // x21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *activeList; // x0
  WarBoardManager_TaskList_o *v8; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *passiveList; // x0

  if ( (byte_40FD3C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_40FD3C0 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  if ( !auraBuffList )
LABEL_13:
    sub_B170D4();
  v6 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v6 >= auraBuffList->fields._size )
      return 0;
    if ( v6 >= (unsigned int)auraBuffList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    activeList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
    if ( !activeList )
      goto LABEL_13;
    v8 = (WarBoardManager_TaskList_o *)auraBuffList->fields._items->m_Items[v6];
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            activeList,
            v8,
            (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      passiveList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
      if ( !passiveList )
        goto LABEL_13;
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              passiveList,
              v8,
              (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        return 1;
    }
    auraBuffList = this->fields.auraBuffList;
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
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 2, 0LL);
}


bool __fastcall BattleBuffData__checkBuffClear(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v8; // x0

  if ( (byte_40FD3DB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, buff);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v5);
    byte_40FD3DB = 1;
  }
  if ( !buff )
    goto LABEL_14;
  if ( buff->fields._isRemove || buff->fields.count && buff->fields.turn )
    return 0;
  if ( buff->fields.auraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
    if ( !auraBuffList )
      goto LABEL_14;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           auraBuffList,
           (WarBoardManager_TaskList_o *)buff,
           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      v8 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
      if ( v8 )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v8,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        goto LABEL_13;
      }
LABEL_14:
      sub_B170D4();
    }
  }
LABEL_13:
  BattleBuffData__RemoveClassIconEffectBuff(this, buff, method);
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
  int max_length; // w8
  int32_t *v11; // x22
  unsigned int v12; // w9
  BattleBuffData_BuffData_o *v13; // x10
  int v14; // w8
  unsigned int v15; // w9
  BattleBuffData_BuffData_o *v16; // x10

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
        sub_B170D4();
      max_length = PassiveList->max_length;
      v11 = &idlist->m_Items[v7 + 1];
      if ( max_length >= 1 )
        break;
LABEL_13:
      PassiveList = BattleBuffData__getActiveList(this, 1, method);
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
        sub_B17100(PassiveList, v9, method);
        sub_B170A0();
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
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v11; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v13; // x23
  unsigned int v14; // w24
  BattleBuffData_BuffData_o *v15; // x0
  System_Int32_array *Individualty; // x0
  int v17; // w8
  BattleBuffData_BuffData_array *v18; // x22
  unsigned int v19; // w23
  BattleBuffData_BuffData_o *v20; // x0
  System_Int32_array *v21; // x0

  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_20;
    max_length = PassiveList->max_length;
    v13 = PassiveList;
    if ( max_length >= 1 )
    {
      v14 = 0;
      do
      {
        if ( v14 >= max_length )
          goto LABEL_19;
        v15 = v13->m_Items[v14];
        if ( !v15 )
          goto LABEL_20;
        Individualty = BattleBuffData_BuffData__GetIndividualty(v15, IsIncludeIgnoreIndividuality, 0, 0, 0LL);
        PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities(
                                                         Individualty,
                                                         individualities,
                                                         0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          return 1;
        max_length = v13->max_length;
      }
      while ( (int)++v14 < max_length );
    }
  }
  PassiveList = BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_20:
    sub_B170D4();
  v17 = PassiveList->max_length;
  v18 = PassiveList;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      v20 = v18->m_Items[v19];
      if ( !v20 )
        goto LABEL_20;
      v21 = BattleBuffData_BuffData__GetIndividualty(
              v20,
              IsIncludeIgnoreIndividuality,
              isIgnoreIndivUnreleaseable,
              0,
              0LL);
      PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities(v21, individualities, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        return 1;
      v17 = v18->max_length;
      if ( (int)++v19 >= v17 )
        return 0;
    }
LABEL_19:
    sub_B17100(PassiveList, v11, isActiveOnly);
    sub_B170A0();
  }
  return 0;
}


bool __fastcall BattleBuffData__checkBuffSpecialAttack(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BuffMaster_o *buffMst; // x0
  WarEntity_o *Entity; // x0
  int32_t v9; // w19

  if ( (byte_40FD3CA & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, buff);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_40FD3CA = 1;
  }
  if ( !buff )
    goto LABEL_12;
  if ( buff->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, (const MethodInfo *)buff);
  if ( !buffMst
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                   buff->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  v9 = *(&Entity->fields.id + 1);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return BuffList__isSpHit(v9, 0LL);
}


bool __fastcall BattleBuffData__checkBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isRec,
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
  bool isUse; // w0
  struct System_Collections_Generic_List_int__o **p_notUseCountWithNoDamageBuffTypes; // x22
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *Value; // x0
  __int64 v29; // x2
  System_String_o *v30; // x23
  System_Char_array *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x23
  BattleBuffData___c_c *v38; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__117_0; // x24
  Il2CppObject *v41; // x25
  struct BattleBuffData___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct BuffMaster_o *buffMaster; // x0
  struct BuffMaster_o **p_buffMaster; // x23
  WebViewManager_o *v59; // x0
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  WarEntity_o *Entity; // x0
  System_Collections_Generic_List_int__o *v68; // x9
  WarEntity_o *v69; // x22
  int32_t current; // w23
  int32_t v71; // w24
  int v72; // w22
  int32_t buffRate; // w8
  bool v74; // w2
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD3F5 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, buff);
    sub_B16FFC(&char___TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v15);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v16);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_BattleBuffData___c__checkBuffSuccessful_b__117_0__, v20);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_9312/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, v22);
    byte_40FD3F5 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  if ( !buff )
    goto LABEL_49;
  if ( buff->fields._isRemove )
    return 0;
  if ( this->fields.isNoDamage )
  {
    p_notUseCountWithNoDamageBuffTypes = &this->fields.notUseCountWithNoDamageBuffTypes;
    if ( !this->fields.notUseCountWithNoDamageBuffTypes )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_49;
      Value = ConstantStrMaster__GetValue(
                MasterData_WarQuestSelectionMaster,
                (System_String_o *)StringLiteral_9312/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/,
                0LL);
      if ( Value )
      {
        v30 = Value;
        v31 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v29);
        if ( !v31 )
          goto LABEL_49;
        if ( !v31->max_length )
        {
          sub_B17100(v31, v31, v32);
          sub_B170A0();
        }
        v31->m_Items[2] = 44;
        v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v30, v31, 0LL);
        v38 = BattleBuffData___c_TypeInfo;
        if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
          v38 = BattleBuffData___c_TypeInfo;
        }
        static_fields = v38->static_fields;
        _9__117_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__117_0;
        if ( !_9__117_0 )
        {
          if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38);
            static_fields = BattleBuffData___c_TypeInfo->static_fields;
          }
          v41 = (Il2CppObject *)static_fields->__9;
          _9__117_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                        System_Func_string__int__TypeInfo,
                                                                                        v33,
                                                                                        v34,
                                                                                        v35,
                                                                                        v36);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__117_0,
            v41,
            Method_BattleBuffData___c__checkBuffSuccessful_b__117_0__,
            (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
          v42 = BattleBuffData___c_TypeInfo->static_fields;
          v42->__9__117_0 = (struct System_Func_string__int__o *)_9__117_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v42->__9__117_0,
            (System_Int32_array **)_9__117_0,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
        }
        v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     v37,
                                                                     (System_Func_TSource__TResult__o *)_9__117_0,
                                                                     (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
        v50 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                       v49,
                                       (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
        *p_notUseCountWithNoDamageBuffTypes = (struct System_Collections_Generic_List_int__o *)v50;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.notUseCountWithNoDamageBuffTypes,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      if ( !*p_notUseCountWithNoDamageBuffTypes )
        goto LABEL_38;
    }
    p_buffMaster = &this->fields.buffMaster;
    buffMaster = this->fields.buffMaster;
    if ( buffMaster
      || (v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
      && (v60 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v59,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___),
          *p_buffMaster = (struct BuffMaster_o *)v60,
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.buffMaster, v60, v61, v62, v63, v64, v65, v66),
          (buffMaster = *p_buffMaster) != 0LL) )
    {
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMaster,
                 buff->fields.buffId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v68 = *p_notUseCountWithNoDamageBuffTypes;
      if ( *p_notUseCountWithNoDamageBuffTypes )
      {
        v69 = Entity;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v75,
          v68,
          (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v76 = v75;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v76,
                  (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( !v69 )
            sub_B170D4();
          current = v76.fields.current;
          v71 = *(&v69->fields.id + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( BuffList__CheckType(current, v71, 0LL) )
          {
            v72 = 392;
            goto LABEL_37;
          }
        }
        v72 = 234;
LABEL_37:
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v76,
          (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v72 == 392 )
          return 0;
        goto LABEL_38;
      }
    }
LABEL_49:
    sub_B170D4();
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
  v74 = buffRate == 1000 || !buffRate || buff->fields.buffRate >= BattleRandom__getNext(1000, 0LL);
  isUse = BattleBuffData_BuffData__FixedUse(buff, this, v74, 0LL);
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
    sub_B170D4();
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
  __int64 v21; // x3
  __int64 v22; // x4
  bool result; // w0
  System_Func_T1__T2__TResult__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Func_T1__T2__TResult__o *v29; // x21
  System_Func_T1__T2__TResult__o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Func_T1__T2__TResult__o *v35; // x25
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Func_T1__T2__T3__T4__TResult__o *v40; // x0
  __int64 *v41; // x25
  System_Func_T1__T2__TResult__o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Func_T1__T2__TResult__o *v47; // x25
  System_Func_int____int____int__int__bool__o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Func_T1__T2__T3__T4__TResult__o *v53; // x24

  if ( (byte_40FD424 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_int____int____bool___ctor__, self);
    sub_B16FFC(&System_Func_int____int____bool__TypeInfo, v10);
    sub_B16FFC(&Method_System_Func_int____int____int__int__bool___ctor__, v11);
    sub_B16FFC(&System_Func_int____int____int__int__bool__TypeInfo, v12);
    sub_B16FFC(&Method_Individuality_IsMatchArrayCount__, v13);
    sub_B16FFC(&Method_Individuality_IsMatchArray__, v14);
    sub_B16FFC(&Method_Individuality_IsPartialMatchArrayCount__, v15);
    sub_B16FFC(&Method_Individuality_IsPartialMatchArray__, v16);
    byte_40FD424 = 1;
  }
  if ( !buffEnt )
    sub_B170D4();
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
          || (v42 = (System_Func_T1__T2__TResult__o *)sub_B170CC(
                                                        System_Func_int____int____bool__TypeInfo,
                                                        v19,
                                                        v20,
                                                        v21,
                                                        v22),
              System_Func_object__object__bool____ctor(
                v42,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__),
              v47 = (System_Func_T1__T2__TResult__o *)sub_B170CC(
                                                        System_Func_int____int____bool__TypeInfo,
                                                        v43,
                                                        v44,
                                                        v45,
                                                        v46),
              System_Func_object__object__bool____ctor(
                v47,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__),
              !Individuality__CheckSignedIndividualities_28893348(
                 self,
                 target,
                 (System_Func_int____int____bool__o *)v42,
                 (System_Func_int____int____bool__o *)v47,
                 0LL)) )
        {
          v40 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B170CC(
                                                            System_Func_int____int____int__int__bool__TypeInfo,
                                                            v19,
                                                            v20,
                                                            v21,
                                                            v22);
          v41 = &Method_Individuality_IsPartialMatchArrayCount__;
          goto LABEL_22;
        }
LABEL_26:
        result = 1;
      }
      else
      {
        v24 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v19, v20, v21, v22);
        System_Func_object__object__bool____ctor(
          v24,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
        v29 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v25, v26, v27, v28);
        System_Func_object__object__bool____ctor(
          v29,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
        result = Individuality__CheckSignedIndividualities_28893348(
                   self,
                   target,
                   (System_Func_int____int____bool__o *)v24,
                   (System_Func_int____int____bool__o *)v29,
                   0LL);
      }
      break;
    case 3:
      v30 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v19, v20, v21, v22);
      System_Func_object__object__bool____ctor(
        v30,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
      v35 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v31, v32, v33, v34);
      System_Func_object__object__bool____ctor(
        v35,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
      if ( !Individuality__CheckSignedIndividualities_28893348(
              self,
              target,
              (System_Func_int____int____bool__o *)v30,
              (System_Func_int____int____bool__o *)v35,
              0LL) )
        goto LABEL_17;
      v40 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B170CC(
                                                        System_Func_int____int____int__int__bool__TypeInfo,
                                                        v36,
                                                        v37,
                                                        v38,
                                                        v39);
      v41 = &Method_Individuality_IsMatchArrayCount__;
LABEL_22:
      v48 = (System_Func_int____int____int__int__bool__o *)v40;
      System_Func_object__object__int__int__bool____ctor(
        v40,
        0LL,
        *v41,
        (const MethodInfo_2B79B90 *)Method_System_Func_int____int____int__int__bool___ctor__);
      v53 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B170CC(
                                                        System_Func_int____int____int__int__bool__TypeInfo,
                                                        v49,
                                                        v50,
                                                        v51,
                                                        v52);
      System_Func_object__object__int__int__bool____ctor(
        v53,
        0LL,
        *v41,
        (const MethodInfo_2B79B90 *)Method_System_Func_int____int____int__int__bool___ctor__);
      result = Individuality__CheckSignedIndividualitiesCount(
                 self,
                 targetCount,
                 v48,
                 (System_Func_int____int____int__int__bool__o *)v53,
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
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0

  if ( (byte_40FD402 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_40FD402 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, (const MethodInfo *)buff);
  if ( !buffMst
    || (Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                   buff->fields.buffId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  return BuffEntity__isConditions(Entity, 0LL);
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
  System_Func_int__int__bool__bool__o *_9__93_0; // x22
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
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FD3E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, aliveSvtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B16FFC(&Method_System_Func_int__int__bool__bool__Invoke__, v11);
    sub_B16FFC(&Method_System_Func_int__int__bool__bool___ctor__, v12);
    sub_B16FFC(&System_Func_int__int__bool__bool__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v15);
    sub_B16FFC(&Method_BattleBuffData___c__checkFieldAlive_b__93_0__, v16);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v17);
    byte_40FD3E6 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v18 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v18 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__93_0 = static_fields->__9__93_0;
  if ( !_9__93_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__93_0 = (System_Func_int__int__bool__bool__o *)sub_B170CC(
                                                        System_Func_int__int__bool__bool__TypeInfo,
                                                        aliveSvtData,
                                                        checkList,
                                                        logic,
                                                        method);
    System_Func_int__int__bool__bool____ctor(
      _9__93_0,
      v21,
      Method_BattleBuffData___c__checkFieldAlive_b__93_0__,
      (const MethodInfo_2B76AE0 *)Method_System_Func_int__int__bool__bool___ctor__);
    v22 = BattleBuffData___c_TypeInfo->static_fields;
    v22->__9__93_0 = _9__93_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__93_0,
      (System_Int32_array **)_9__93_0,
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
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)checkList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v38 = v37;
  v29 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v38.fields.current;
    if ( !v38.fields.current )
      sub_B170D4();
    monitor = v38.fields.current[9].monitor;
    if ( monitor )
    {
      if ( !aliveSvtData )
        sub_B170D4();
      TargetSideSvtDataList = FieldAliveServantData__getTargetSideSvtDataList(
                                aliveSvtData,
                                *((_BYTE *)monitor + 16),
                                0LL);
      if ( !TargetSideSvtDataList )
        sub_B170D4();
      v34 = (System_Int32_array *)*((_QWORD *)monitor + 3);
      if ( v34 )
      {
        TargetSideSvtDataList = (System_Collections_Generic_List_BattleServantData__o *)BattleBuffData__CheckIndivSvtDataList(
                                                                                          TargetSideSvtDataList,
                                                                                          v34,
                                                                                          *((_BYTE *)monitor + 32),
                                                                                          v33);
        if ( !TargetSideSvtDataList )
          sub_B170D4();
      }
      if ( !_9__93_0 )
        sub_B170D4();
      if ( System_Func_int__int__bool__bool___Invoke(
             _9__93_0,
             TargetSideSvtDataList->fields._size,
             *((_DWORD *)monitor + 5),
             *((_BYTE *)monitor + 17),
             (const MethodInfo_2B76AF4 *)Method_System_Func_int__int__bool__bool__Invoke__) )
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
    &v38,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v29 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_34:
    sub_B170D4();
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
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  int v34; // w9
  signed int v35; // w10
  unsigned int v36; // w11
  bool v37; // w0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo *v41; // x3
  int v42; // w22
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x4
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  int v46[2]; // [xsp+20h] [xbp-70h]
  int v47; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_40FD3E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, idList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v16);
    byte_40FD3E5 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v47 = 0;
  *onList = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)onList,
    0LL,
    (System_String_array **)aliveSvtData,
    (System_String_array **)onList,
    (System_Boolean_array **)offList,
    (System_Int32_array **)logic,
    (System_Int32_array *)method,
    v7);
  *offList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)offList, 0LL, v17, v18, v19, v20, v21, v22);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v24 = 0;
  v48 = v45;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v29 )
      break;
    if ( !v48.fields.current )
      sub_B170D4();
    monitor_high = HIDWORD(v48.fields.current[3].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !idList )
        sub_B170D4();
      max_length = idList->max_length;
      if ( max_length < 1 )
      {
LABEL_13:
        v28 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v48.fields.current,
                1,
                v32);
      }
      else
      {
        v27 = 0;
        while ( 1 )
        {
          if ( v27 >= max_length )
          {
            sub_B17100(v29, v30, v31);
            sub_B170A0();
          }
          if ( monitor_high == idList->m_Items[v27 + 1] )
            break;
          if ( (int)++v27 >= max_length )
            goto LABEL_13;
        }
        v28 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v48.fields.current,
                1,
                v32);
      }
      v24 |= v28;
    }
  }
  v46[0] = 137;
  v47 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v47 = 0;
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v48 = v45;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v38 )
      break;
    if ( !v48.fields.current )
      sub_B170D4();
    v34 = HIDWORD(v48.fields.current[3].monitor);
    if ( v34 >= 1 )
    {
      if ( !idList )
        sub_B170D4();
      v35 = idList->max_length;
      if ( v35 < 1 )
      {
LABEL_27:
        v37 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v48.fields.current,
                1,
                v41);
      }
      else
      {
        v36 = 0;
        while ( 1 )
        {
          if ( v36 >= v35 )
          {
            sub_B17100(v38, v39, v40);
            sub_B170A0();
          }
          if ( v34 == idList->m_Items[v36 + 1] )
            break;
          if ( (int)++v36 >= v35 )
            goto LABEL_27;
        }
        v37 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v48.fields.current,
                1,
                v41);
      }
      v24 |= v37;
    }
  }
  v46[0] = 273;
  v42 = ++v47;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v42 && v46[v42 - 1] == 273 )
    v47 = v42 - 1;
  if ( (v24 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      goto LABEL_37;
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_37:
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.passiveList, logic, v43);
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.activeList, logic, v44);
}


bool __fastcall BattleBuffData__checkGutsBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isRec,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t buffRate; // w8
  int32_t GutsNext; // w0
  int32_t v9; // w8
  bool v10; // cc

  if ( !buff )
    sub_B170D4();
  if ( buff->fields.isDecide )
    return buff->fields.isUse;
  buffRate = buff->fields.buffRate;
  result = 1;
  buff->fields.isDecide = 1;
  if ( buffRate == 1000 || !buffRate )
  {
    buff->fields.isUse = 1;
    if ( !isRec )
      return result;
    goto LABEL_10;
  }
  GutsNext = BattleRandom__getGutsNext(1000, 0LL);
  v9 = buff->fields.buffRate;
  v10 = v9 < GutsNext;
  result = v9 >= GutsNext;
  buff->fields.isUse = result;
  if ( !v10 && isRec )
  {
LABEL_10:
    result = 1;
    buff->fields.isAct = 1;
  }
  return result;
}


bool __fastcall BattleBuffData__checkGutsBuffSuccessfulIndividual(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_String_array **v11; // x2
  MethodInfo *v12; // x3
  __int64 v13; // x8
  _BOOL8 v14; // x0
  unsigned __int64 v15; // x21
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleBuffData_BuffData_o *v20; // x1

  *buff = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)buff,
    0LL,
    (System_String_array **)buff,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !bufflist )
    sub_B170D4();
  v13 = *(_QWORD *)&bufflist->max_length;
  v14 = 0LL;
  if ( v13 && (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
        goto LABEL_12;
      v14 = BattleBuffData__checkGutsBuffSuccessful((BattleBuffData_o *)v14, bufflist->m_Items[v15], 0, v12);
      if ( v14 )
        break;
      LODWORD(v13) = bufflist->max_length;
      if ( (__int64)++v15 >= (int)v13 )
      {
        LOBYTE(v14) = 0;
        return v14;
      }
    }
    if ( (unsigned int)v15 >= bufflist->max_length )
    {
LABEL_12:
      sub_B17100(v14, v10, v11);
      sub_B170A0();
    }
    v20 = bufflist->m_Items[v15];
    *buff = v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)buff,
      (System_Int32_array **)v20,
      v11,
      (System_String_array **)v12,
      v16,
      v17,
      v18,
      v19);
    LOBYTE(v14) = 1;
  }
  return v14;
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
    sub_B170D4();
  return BattleBuffData__checkIndiviuality_31052280(
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


bool __fastcall BattleBuffData__checkIndiviuality_31052280(
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
  BuffMaster_o *buffMst; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v20; // x4
  BuffEntity_o *v21; // x23
  System_Int32_array *ckSelfIndv; // x24
  BattleBuffData_o *CkSelfCountIndividuality; // x0
  const MethodInfo *v24; // x5
  struct BuffList_BaseInvokeCond_o *OpponentInvokeCond_k__BackingField; // x22
  struct System_Int32_array *ckOpIndv; // x21
  System_Int32_array *CkOpCountIndividuality; // x0

  if ( (byte_40FD423 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, actInfo);
    byte_40FD423 = 1;
  }
  *plusMinus = 0;
  if ( !buffData )
    goto LABEL_18;
  if ( buffData->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, (const MethodInfo *)actInfo);
  if ( !buffMst )
    goto LABEL_18;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
             buffData->fields.buffId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v21 = (BuffEntity_o *)Entity;
  if ( !BattleBuffData__checkTypePlusMinus(
          (BattleBuffData_o *)Entity,
          actInfo,
          *(&Entity->fields.id + 1),
          plusMinus,
          v20) )
    return 0;
  if ( BuffEntity__IsIndvAddBuffPassive(v21, 0LL) )
  {
    if ( selfIndvAll )
      selfIndv = selfIndvAll;
    if ( opIndvAll )
      opIndv = opIndvAll;
  }
  ckSelfIndv = v21->fields.ckSelfIndv;
  CkSelfCountIndividuality = (BattleBuffData_o *)BuffEntity__GetCkSelfCountIndividuality(v21, 0LL);
  if ( !BattleBuffData__checkBuffTypeIndiviuality(
          CkSelfCountIndividuality,
          selfIndv,
          ckSelfIndv,
          v21,
          (System_Int32_array *)CkSelfCountIndividuality,
          v24) )
    return 0;
  if ( !actInfo
    || (OpponentInvokeCond_k__BackingField = actInfo->fields._OpponentInvokeCond_k__BackingField,
        ckOpIndv = v21->fields.ckOpIndv,
        CkOpCountIndividuality = BuffEntity__GetCkOpCountIndividuality(v21, 0LL),
        !OpponentInvokeCond_k__BackingField) )
  {
LABEL_18:
    sub_B170D4();
  }
  return ((__int64 (__fastcall *)(struct BuffList_BaseInvokeCond_o *, BattleBuffData_o *, BuffEntity_o *, System_Int32_array *, struct System_Int32_array *, System_Int32_array *, Il2CppMethodPointer))OpponentInvokeCond_k__BackingField->klass->vtable._5_CheckInvokeCond.method)(
           OpponentInvokeCond_k__BackingField,
           this,
           v21,
           opIndv,
           ckOpIndv,
           CkOpCountIndividuality,
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
  BuffMaster_o *buffMst; // x0
  System_Int32_array *Individualty; // x0

  if ( (byte_40FD427 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_40FD427 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, (const MethodInfo *)buff);
  if ( !buffMst )
LABEL_9:
    sub_B170D4();
  if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
          buff->fields.buffId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__) )
    return 0;
  Individualty = BattleBuffData_BuffData__GetIndividualty(buff, 0, 0, 0, 0LL);
  return Individuality__CheckIndividualities(Individualty, list, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_40FD425 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B16FFC(&BuffList_TypeInfo, actInfo);
    byte_40FD425 = 1;
  }
  *plusMinus = 0;
  if ( !actInfo )
    sub_B170D4();
  plusTypes = actInfo->fields.plusTypes;
  if ( plusTypes && (v9 = *(_QWORD *)&plusTypes->max_length, (int)v9 >= 1) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
LABEL_25:
        sub_B17100(this, actInfo, *(_QWORD *)&inType);
        sub_B170A0();
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

  if ( (byte_40FD3CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    byte_40FD3CB = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


void __fastcall BattleBuffData__clearAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x0

  if ( (byte_40FD3CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    byte_40FD3CC = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  if ( !auraBuffList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
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

  if ( (byte_40FD416 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, actInfo);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v18);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v19);
    byte_40FD416 = 1;
  }
  plusMinus[1] = 0;
  *value = 0;
  v20 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)selfIndv);
  if ( !v20 )
    sub_B170D4();
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
    p_method = sub_AAFEF8(v20, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v22,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_B170D4();
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
      v30 = sub_AAFEF8(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_AAFEF8(v26, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v35 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    v36 = v35;
    if ( !v35 )
      sub_B170D4();
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v35, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v36,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v36, 0LL) || v36->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v36, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v36, 0LL))
      && BattleBuffData__checkIndiviuality_31052280(
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
    v42 = sub_AAFEF8(v26, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  unsigned __int64 v16; // x23
  BattleBuffData_BuffData_o *v17; // x22

  if ( (byte_40FD3D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, bufflist);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    byte_40FD3D8 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  bufflist,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !bufflist )
    goto LABEL_14;
  v15 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      v17 = bufflist->m_Items[v16];
      v11 = BattleBuffData__checkBuffSuccessful(this, v17, 1, v14);
      if ( v11 )
      {
        if ( !v10 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v15) = bufflist->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)v15 );
  }
  if ( !v10 )
LABEL_14:
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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

  if ( (byte_40FD414 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40FD414 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B170D4();
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

  return BattleBuffData__getActMag_31051980(
           this,
           act,
           selfIndiv,
           this->fields.wkzero,
           &this->fields.wkStr,
           checkIndividualities,
           0LL,
           v5);
}


float __fastcall BattleBuffData__getActMag_31051964(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return BattleBuffData__getActMag_31051980(
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
float __fastcall BattleBuffData__getActMag_31051980(
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

  if ( (byte_40FD40F & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40FD40F = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return (float)BattleBuffData__getActValue_31050828(
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


float __fastcall BattleBuffData__getActMag_31052184(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B170D4();
  return (float)BattleBuffData__getActValue_31050828(
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


float __fastcall BattleBuffData__getActMag_31052244(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B170D4();
  return BattleBuffData__getActMag_31051980(
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
  int32_t CalculationParam; // w0
  int32_t v17; // w20
  int32_t v18; // w21
  int32_t v19; // w20
  const MethodInfo *v21; // [xsp+18h] [xbp-48h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_40FD409 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B16FFC(&System_Math_TypeInfo, v13);
    byte_40FD409 = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  *actflg = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities
    || (v15 = ActInfo,
        CalculationParam = BattleBuffData__getCalculationParam(
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
                             v21),
        !v15) )
  {
    sub_B170D4();
  }
  v17 = CalculationParam;
  if ( BuffList_ActInfo__isLowerLimit(v15, 0LL) )
  {
    v18 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Max_44463768(v18, v17, 0LL);
  }
  v19 = v17 - v15->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(v15, 0LL) && upperParam[1] < v19 )
    return upperParam[1];
  return v19;
}


int32_t __fastcall BattleBuffData__getActValue_31050632(
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
int32_t __fastcall BattleBuffData__getActValue_31050648(
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

  if ( (byte_40FD40A & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40FD40A = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return BattleBuffData__getActValue_31050828(
           this,
           ActInfo,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           selfIf,
           v14);
}


int32_t __fastcall BattleBuffData__getActValue_31050828(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *selfIf,
        const MethodInfo *method)
{
  int32_t CalculationParam; // w0
  int32_t v16; // w20
  int32_t v17; // w21
  int32_t v18; // w20
  const MethodInfo *v20; // [xsp+18h] [xbp-58h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_40FD40C & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, actInfo);
    byte_40FD40C = 1;
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
    sub_B170D4();
  v16 = CalculationParam;
  if ( BuffList_ActInfo__isLowerLimit(actInfo, 0LL) )
  {
    v17 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Max_44463768(v17, v16, 0LL);
  }
  v18 = v16 - actInfo->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(actInfo, 0LL) && upperParam[1] < v18 )
    return upperParam[1];
  return v18;
}


int32_t __fastcall BattleBuffData__getActValue_31051120(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue_31050648(this, act, selfIndiv, this->fields.wkzero, checkIndividualities, 0LL, v5);
}


int32_t __fastcall BattleBuffData__getActValue_31051136(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  if ( !checkIndividualities )
    sub_B170D4();
  return BattleBuffData__getActValue_31050648(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           checkIndividualities,
           0LL,
           v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getActValue_31051172(
        BattleBuffData_o *this,
        int32_t act,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v10; // x7

  if ( (byte_40FD40B & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40FD40B = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B170D4();
  return BattleBuffData__getActValue_31050828(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD3BC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_40FD3BC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B170D4();
    if ( !BattleBuffData_BuffData__checkAct((BattleBuffData_BuffData_o *)v17.fields.current, 1, 0LL)
      && LOBYTE(current[2].klass) )
    {
      if ( !v13 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v13 )
LABEL_15:
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleBuffData__getActiveBuffNum(
        BattleBuffData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned __int64 max_length; // x9
  int32_t v8; // w8
  unsigned __int64 v9; // x10
  unsigned __int64 v10; // x13
  BattleBuffData_BuffData_o *v11; // x15
  unsigned __int64 v12; // x14
  int32_t v13; // w17

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
LABEL_18:
    sub_B170D4();
  max_length = ActiveList->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= max_length )
        goto LABEL_17;
      if ( !ids )
        goto LABEL_18;
      v10 = ids->max_length;
      if ( (__int64)(v10 << 32) >= 1 )
        break;
LABEL_13:
      if ( (__int64)++v9 >= (int)max_length )
        return v8;
    }
    v11 = ActiveList->m_Items[v9];
    v12 = 0LL;
    while ( v12 < v10 )
    {
      if ( !v11 )
        goto LABEL_18;
      v13 = ids->m_Items[++v12];
      if ( v13 == v11->fields.buffId )
        ++v8;
      if ( (__int64)v12 >= (int)v10 )
        goto LABEL_13;
    }
LABEL_17:
    sub_B17100(ActiveList, v5, v6);
    sub_B170A0();
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
  __int64 v6; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v8; // x20
  int v9; // w22
  int32_t v10; // w21
  BattleBuffData_BuffData_o *v11; // x0
  System_Int32_array *Individualty; // x0

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
    goto LABEL_11;
  max_length = ActiveList->max_length;
  v8 = ActiveList;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
      {
        sub_B17100(ActiveList, v5, v6);
        sub_B170A0();
      }
      v11 = v8->m_Items[v9];
      if ( !v11 )
        break;
      Individualty = BattleBuffData_BuffData__GetIndividualty(v11, 0, 0, 0, 0LL);
      ActiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities(
                                                      Individualty,
                                                      individualities,
                                                      0LL);
      max_length = v8->max_length;
      ++v9;
      v10 += (unsigned __int8)ActiveList & 1;
      if ( v9 >= max_length )
        return v10;
    }
LABEL_11:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleBuffData___c__DisplayClass31_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40FD3BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, isCheckInterval);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass31_0__getActiveList_b__0__, v10);
    sub_B16FFC(&BattleBuffData___c__DisplayClass31_0_TypeInfo, v11);
    byte_40FD3BA = 1;
  }
  v12 = (BattleBuffData___c__DisplayClass31_0_o *)sub_B170CC(
                                                    BattleBuffData___c__DisplayClass31_0_TypeInfo,
                                                    isCheckInterval,
                                                    method,
                                                    v3,
                                                    v4);
  BattleBuffData___c__DisplayClass31_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.isCheckInterval = isCheckInterval,
        activeList = this->fields.activeList,
        v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v13,
                                                                         v14,
                                                                         v15,
                                                                         v16),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass31_0__getActiveList_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !activeList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B170D4();
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_40FD3BE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    byte_40FD3BE = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  int32_t v15; // w20
  const MethodInfo *v17; // [xsp+18h] [xbp-58h]
  System_String_o *missText; // [xsp+28h] [xbp-48h] BYREF
  int32_t val1; // [xsp+38h] [xbp-38h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  v11 = value;
  if ( (byte_40FD40D & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&value);
    sub_B16FFC(&System_Math_TypeInfo, v13);
    byte_40FD40D = 1;
  }
  upperParam = 0;
  val1 = 0;
  missText = 0LL;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  BattleBuffData__getCalculationParam(
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
    v17);
  if ( !ActInfo )
    sub_B170D4();
  if ( BuffList_ActInfo__isLowerLimit(ActInfo, 0LL) )
  {
    v15 = val1;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = System_Math__Max_44463768(v15, v11, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x19
  BattleBuffData___c_c *v11; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__36_0; // x20
  Il2CppObject *v14; // x21
  struct BattleBuffData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FD3BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v6);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_BattleBuffData___c__getAuraBuffList_b__36_0__, v8);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v9);
    byte_40FD3BF = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v11 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v11 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__36_0,
      v14,
      Method_BattleBuffData___c__getAuraBuffList_b__36_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v15 = BattleBuffData___c_TypeInfo->static_fields;
    v15->__9__36_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__36_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !auraBuffList )
    sub_B170D4();
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)auraBuffList,
                                                                         (System_Predicate_T__o *)_9__36_0,
                                                                         (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffActiveIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x19
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  BattleBuffData___c_c *v22; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__103_0; // x21
  Il2CppObject *v25; // x22
  struct BattleBuffData___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleBuffData_BuffData_array *v33; // x20
  int max_length; // w8
  unsigned int v35; // w21
  BattleBuffData_BuffData_o *v36; // x8

  if ( (byte_40FD3EB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, IsIncludeUnsubState);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&Method_BattleBuffData___c__getBuffActiveIDList_b__103_0__, v12);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v13);
    byte_40FD3EB = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    IsIncludeUnsubState,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( IsIncludeUnsubState )
  {
    ActiveList = BattleBuffData__getActiveList(this, 1, v16);
  }
  else
  {
    v22 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v22 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__103_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__103_0;
    if ( !_9__103_0 )
    {
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__103_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__103_0,
        v25,
        Method_BattleBuffData___c__getBuffActiveIDList_b__103_0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v26 = BattleBuffData___c_TypeInfo->static_fields;
      v26->__9__103_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__103_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v26->__9__103_0,
        (System_Int32_array **)_9__103_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    if ( !this )
      goto LABEL_24;
    ActiveList = BattleBuffData__GetAvaliableActiveBuffArray(
                   this,
                   (System_Predicate_BattleBuffData_BuffData__o *)_9__103_0,
                   v16);
  }
  v33 = ActiveList;
  if ( !ActiveList )
    goto LABEL_24;
  max_length = ActiveList->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
      {
        sub_B17100(ActiveList, v20, v21);
        sub_B170A0();
      }
      v36 = v33->m_Items[v35];
      if ( !v36 || !v14 )
        break;
      System_Collections_Generic_List_int___Add(
        v14,
        v36->fields.buffId,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v33->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_22;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_22:
  if ( !v14 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v19; // x21
  const MethodInfo *v20; // x2
  void *PassiveList; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  void *v26; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  BattleBuffData___c_c *v32; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__102_0; // x23
  Il2CppObject *v35; // x24
  struct BattleBuffData___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_T__o *All; // x0
  int v44; // w8
  unsigned int v45; // w22
  __int64 v46; // x8
  System_Collections_Generic_IEnumerable_T__o *BuffActiveIDList; // x0

  if ( (byte_40FD3EA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, IsIncludeUnsubState);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___66753760, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v15);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v16);
    sub_B16FFC(&Method_BattleBuffData___c__getBuffIDList_b__102_0__, v17);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v18);
    byte_40FD3EA = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    IsIncludeUnsubState,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v20);
  v26 = PassiveList;
  if ( !IsIncludeUnsubState )
  {
    v27 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                            v22,
                                                                            v23,
                                                                            v24,
                                                                            v25);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v27,
      (System_Collections_Generic_IEnumerable_T__o *)v26,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___66753760);
    v32 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v32 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__102_0;
    if ( !_9__102_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                             v28,
                                                                             v29,
                                                                             v30,
                                                                             v31);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__102_0,
        v35,
        Method_BattleBuffData___c__getBuffIDList_b__102_0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v36 = BattleBuffData___c_TypeInfo->static_fields;
      v36->__9__102_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__102_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v36->__9__102_0,
        (System_Int32_array **)_9__102_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    if ( !v27 )
      goto LABEL_24;
    All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
            (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v27,
            (System_Predicate_T__o *)_9__102_0,
            (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    if ( !All )
      goto LABEL_24;
    PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    v26 = PassiveList;
  }
  if ( !v26 )
    goto LABEL_24;
  v44 = *((_DWORD *)v26 + 6);
  if ( v44 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= v44 )
      {
        sub_B17100(PassiveList, v22, v23);
        sub_B170A0();
      }
      v46 = *((_QWORD *)v26 + (int)v45 + 4);
      if ( !v46 || !v19 )
        break;
      System_Collections_Generic_List_int___Add(
        v19,
        *(_DWORD *)(v46 + 16),
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      v44 = *((_DWORD *)v26 + 6);
      if ( (int)++v45 >= v44 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_22:
  BuffActiveIDList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffActiveIDList(
                                                                      this,
                                                                      IsIncludeUnsubState,
                                                                      v23);
  if ( !v19 )
    goto LABEL_24;
  System_Collections_Generic_List_int___AddRange(
    v19,
    BuffActiveIDList,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v17; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v19; // x24
  unsigned int v20; // w25
  BattleBuffData_BuffData_o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *Individualty; // x0
  int v23; // w8
  BattleBuffData_BuffData_array *v24; // x23
  unsigned int v25; // w24
  BattleBuffData_BuffData_o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x0

  if ( (byte_40FD3E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, isActiveOnly);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_40FD3E8 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    isActiveOnly,
                                                    isIncludeIgnoreIndiv,
                                                    isIgnoreIndivUnreleaseable,
                                                    isAiCheck);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (isAiCheck || !isIgnoreIndivUnreleaseable) && !isActiveOnly )
  {
    PassiveList = BattleBuffData__getPassiveList(this, 1, v15);
    if ( !PassiveList )
      goto LABEL_21;
    max_length = PassiveList->max_length;
    v19 = PassiveList;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( v20 < max_length )
      {
        v21 = v19->m_Items[v20];
        if ( !v21 )
          goto LABEL_21;
        Individualty = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData_BuffData__GetIndividualty(
                                                                        v21,
                                                                        isIncludeIgnoreIndiv,
                                                                        isIgnoreIndivUnreleaseable,
                                                                        isAiCheck,
                                                                        0LL);
        if ( !v14 )
          goto LABEL_21;
        System_Collections_Generic_List_int___AddRange(
          v14,
          Individualty,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        max_length = v19->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_12;
      }
LABEL_22:
      sub_B17100(PassiveList, v17, v15);
      sub_B170A0();
    }
  }
LABEL_12:
  PassiveList = BattleBuffData__getActiveList(this, 1, v15);
  if ( !PassiveList )
    goto LABEL_21;
  v23 = PassiveList->max_length;
  v24 = PassiveList;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( v25 < v23 )
    {
      v26 = v24->m_Items[v25];
      if ( !v26 )
        goto LABEL_21;
      v27 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData_BuffData__GetIndividualty(
                                                             v26,
                                                             isIncludeIgnoreIndiv,
                                                             isIgnoreIndivUnreleaseable,
                                                             isAiCheck,
                                                             0LL);
      if ( !v14 )
        goto LABEL_21;
      System_Collections_Generic_List_int___AddRange(
        v14,
        v27,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
      v23 = v24->max_length;
      if ( (int)++v25 >= v23 )
        goto LABEL_19;
    }
    goto LABEL_22;
  }
LABEL_19:
  if ( !v14 )
LABEL_21:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  if ( !checkIndividualities )
    sub_B170D4();
  return BattleBuffData__getBuffList_31020028(
           this,
           types,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checklist,
           method);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_31020028(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  int *v5; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  WarEntity_o *Entity; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  int v22; // w8
  int v23; // w28
  BuffMaster_o *buffMst; // x0
  __int64 v25; // x8
  WarEntity_o *v26; // x25
  unsigned __int64 v27; // x22
  int32_t v28; // w26
  int32_t v29; // w27
  __int64 v30; // x1
  __int64 v31; // x24
  int *v32; // x19

  v5 = (int *)checklist;
  if ( (byte_40FD3F3 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, types);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_40FD3F3 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  types,
                                                                                                  targetIndividualities,
                                                                                                  checklist,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v5 )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v18);
    if ( !v15 )
      goto LABEL_32;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      ActiveList,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v20);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      PassiveList,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v5 = (int *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    if ( !v5 )
      goto LABEL_32;
  }
  v22 = v5[6];
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v22 )
        goto LABEL_31;
      v31 = *(_QWORD *)&v5[2 * v23 + 8];
      if ( !v31 )
        goto LABEL_32;
      v32 = v5;
      if ( !*(_BYTE *)(v31 + 370) )
      {
        buffMst = BattleBuffData__get_buffMst(this, v17);
        if ( !buffMst )
          goto LABEL_32;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                   *(_DWORD *)(v31 + 16),
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( Entity )
        {
          if ( !types )
            goto LABEL_32;
          v25 = *(_QWORD *)&types->max_length;
          if ( (int)v25 >= 1 )
            break;
        }
      }
LABEL_28:
      v22 = v32[6];
      ++v23;
      v5 = v32;
      if ( v23 >= v22 )
        goto LABEL_29;
    }
    v26 = Entity;
    v27 = 0LL;
    while ( v27 < (unsigned int)v25 )
    {
      v28 = types->m_Items[v27 + 1];
      v29 = *(&v26->fields.id + 1);
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      Entity = (WarEntity_o *)BuffList__CheckType(v28, v29, 0LL);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        v30 = *(_QWORD *)&v26->fields.parentWarId;
        if ( !v30
          || !*(_QWORD *)(v30 + 24)
          || (Entity = (WarEntity_o *)Individuality__CheckIndividualities(
                                        targetIndividualities,
                                        (System_Int32_array *)v30,
                                        0LL),
              ((unsigned __int8)Entity & 1) != 0) )
        {
          if ( !v15 )
            goto LABEL_32;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
      LODWORD(v25) = types->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_28;
    }
LABEL_31:
    sub_B17100(Entity, v17, v18);
    sub_B170A0();
  }
LABEL_29:
  if ( !v15 )
LABEL_32:
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_31040328(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        bool checkOnly,
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
  BuffList_ActInfo_o *ActInfo; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v26; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x20
  bool v33; // w25
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x26
  const MethodInfo *v43; // x5
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  int32_t plusMinus; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FD41E & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18);
    byte_40FD41E = 1;
  }
  plusMinus = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  plusMinus = 0;
  v26 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v25);
  if ( !v26 )
    goto LABEL_42;
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
    p_method = sub_AAFEF8(v26, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_B170D4();
  v33 = isRec;
  while ( 1 )
  {
    v34 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_19;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_19:
      v37 = sub_AAFEF8(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v32, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_26;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_26:
      v41 = sub_AAFEF8(v32, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(
                                                                   v32,
                                                                   *(_QWORD *)(v41 + 8));
    if ( BattleBuffData__checkIndiviuality(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)v42,
           checkIndividualities,
           &plusMinus,
           v43)
      && (checkOnly || BattleBuffData__checkBuffSuccessful(this, (BattleBuffData_BuffData_o *)v42, v33, v44)) )
    {
      if ( !v24 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        v42,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
        goto LABEL_37;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_37:
    v48 = sub_AAFEF8(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v32, *(_QWORD *)(v48 + 8));
  if ( !v24 )
LABEL_42:
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_int__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  const MethodInfo *v30; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v32; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x24
  System_Int32_array *v39; // x24
  Il2CppObject *current; // x23
  const MethodInfo *v42; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+10h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_40FD41D & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18);
    byte_40FD41D = 1;
  }
  plusMinus = 0;
  memset(&v43, 0, sizeof(v43));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  plusMinus = 0;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v30);
  if ( !v29 )
    goto LABEL_21;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v32);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( servantData )
  {
    v38 = sub_B170CC(BattleBuffData_CheckIndividualitiesData_TypeInfo, v34, v35, v36, v37);
    BattleBuffData_CheckIndividualitiesData___ctor(
      (BattleBuffData_CheckIndividualitiesData_o *)v38,
      servantData,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !v38 )
      goto LABEL_21;
    servantData = *(BattleServantData_o **)(v38 + 48);
    v39 = *(System_Int32_array **)(v38 + 16);
  }
  else
  {
    v39 = 0LL;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v29,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v43.fields.current;
    if ( BattleBuffData__checkIndiviuality_31052280(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)v43.fields.current,
           (System_Int32_array *)servantData,
           0LL,
           v39,
           0LL,
           &plusMinus,
           v42) )
    {
      if ( !current )
        sub_B170D4();
      if ( !v24 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        v24,
        HIDWORD(current[1].monitor),
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v24 )
LABEL_21:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v24,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getBuffSuccessfulIndividual(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v4; // x9
  BattleBuffData_BuffData_o *result; // x0

  if ( !bufflist )
    goto LABEL_10;
  v3 = *(_QWORD *)&bufflist->max_length;
  if ( v3 && (int)v3 >= 1 )
  {
    v4 = 0LL;
    while ( 1 )
    {
      result = bufflist->m_Items[v4];
      if ( !result )
        break;
      if ( result->fields.isUse )
        return result;
      if ( (int)++v4 >= (int)v3 )
        return 0LL;
    }
LABEL_10:
    sub_B170D4();
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
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v25; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v28; // x19
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x20
  System_Collections_IEnumerator_c **v33; // x21
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **v34; // x19
  __int64 v35; // x8
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *v36; // x1
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  BattleBuffData_BuffData_o *v40; // x0
  BattleBuffData_BuffData_o *v41; // x24
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
  __int64 v72; // x0
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
  int32_t ActValue_31050648; // w0
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
  int32_t maxBuffRate[5]; // [xsp+8Ch] [xbp-84h] BYREF
  int32_t plusMinus[2]; // [xsp+A8h] [xbp-68h] BYREF

  v13 = upperParam;
  v14 = opIndv;
  v15 = actInfo;
  if ( (byte_40FD410 & 1) == 0 )
  {
    sub_B16FFC(&BuffInterface_TypeInfo, actInfo);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v16);
    sub_B16FFC(&System_IDisposable_TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v18);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v19);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_B16FFC(&System_Math_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_11100/*"REVERT_BUFF_LOWER_LIMIT"*/, v22);
    byte_40FD410 = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)missText,
    0LL,
    (System_String_array **)selfIndv,
    (System_String_array **)selfIf,
    (System_Boolean_array **)opIndv,
    (System_Int32_array **)upperParam,
    (System_Int32_array *)actflg,
    (System_Int32_array *)missText);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11100/*"REVERT_BUFF_LOWER_LIMIT"*/, 0LL);
  v25 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v24);
  if ( !v25 )
LABEL_117:
    sub_B170D4();
  klass = v25->klass;
  v28 = v25;
  v126 = (BattleServantConfConponent_o *)missText;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(v25, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_B170D4();
  v33 = &System_Collections_IEnumerator_TypeInfo;
  v34 = &System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo;
  v127 = v15;
  while ( 1 )
  {
    v112 = *(_QWORD *)v32;
    v113 = *v33;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v114 = 0LL;
      v115 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v115 - 1) != v113 )
      {
        ++v114;
        v115 += 4;
        if ( v114 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_103;
      }
      v116 = v112 + 16LL * *v115 + 312;
    }
    else
    {
LABEL_103:
      v116 = sub_AAFEF8(v32, v113, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v116)(v32, *(_QWORD *)(v116 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v32;
    v36 = *v34;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v38 - 1) != v36 )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_17;
      }
      v39 = v35 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_17:
      v39 = sub_AAFEF8(v32, v36, 0LL);
    }
    v40 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v32, *(_QWORD *)(v39 + 8));
    v41 = v40;
    if ( !v40 )
      sub_B170D4();
    if ( !v40->fields._isRemove
      && (!BattleBuffData_BuffData__isCommandCodeBuff(v40, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v41,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v41, 0LL) || v41->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v41, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v41, 0LL)) )
    {
      if ( !checkIndividualities )
        sub_B170D4();
      v42 = v34;
      v43 = v33;
      selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
      opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
      if ( BattleBuffData_BuffData__checkState(v41, 0x100000, 0LL) )
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
      v48 = BattleBuffData__checkIndiviuality_31052280(
              this,
              v15,
              v41,
              v47,
              v46,
              selfIndividuality_k__BackingField,
              opponentIndividuality_k__BackingField,
              plusMinus,
              v122);
      v33 = v43;
      v34 = v42;
      if ( v48 && BattleBuffData__checkBuffSuccessful(this, v41, v15->fields.isRec, v49) )
      {
        *actflg = 1;
        buffMst = BattleBuffData__get_buffMst(this, v50);
        if ( !buffMst )
          sub_B170D4();
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                   v41->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v53 = (BuffEntity_o *)Entity;
        v133 = (BuffEntity_o *)Entity;
        v132 = plusMinus[0];
        if ( Value <= 0 && (plusMinus[0] & 0x80000000) != 0 )
        {
          v54 = buffProc;
          if ( !Entity )
            sub_B170D4();
          v55 = v15->fields.baseParam;
          emptyMessage_high = HIDWORD(Entity->fields.emptyMessage);
          v57 = *lowerParam;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v58 = System_Math__Min_44418752(v57, v55 - emptyMessage_high, 0LL);
          v53 = v133;
          v59 = v58;
          buffProc = v54;
          v33 = v43;
          *lowerParam = v58;
        }
        else
        {
          if ( !Entity )
            sub_B170D4();
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
        *lowerParam = System_Math__Min_44418752(v59, ExtendLowerLimit, 0LL);
        maxBuffRate[2] = v41->fields.param;
        isValidHpRange = BattleBuffData_BuffData__isValidHpRange(v41, 0LL);
        v63 = selfIf;
        if ( selfIf && isValidHpRange )
        {
          v123 = v14;
          v124 = v13;
          v64 = selfIf->klass;
          v125 = buffProc;
          param = v41->fields.param;
          ratioHpHigh = v41->fields.ratioHpHigh;
          ratioHpLow = v41->fields.ratioHpLow;
          ratioRangeHigh = v41->fields.ratioRangeHigh;
          ratioRangeLow = v41->fields.ratioRangeLow;
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
            v72 = (__int64)&v64->vtable[*v71 + 2].method;
          }
          else
          {
LABEL_54:
            v72 = sub_AAFEF8(selfIf, BuffInterface_TypeInfo, 2LL);
            v63 = selfIf;
          }
          v85 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v72)(
                  v63,
                  ratioHpLow,
                  ratioHpHigh,
                  ratioRangeLow,
                  ratioRangeHigh,
                  *(_QWORD *)(v72 + 8))
              + param;
          v13 = v124;
          buffProc = v125;
          v14 = v123;
          goto LABEL_76;
        }
        if ( selfIf )
        {
          v73 = v41->fields.ratioHpLow;
          if ( v73 >= 1 )
          {
            v74 = selfIf->klass;
            v75 = v41->fields.param;
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
              v78 = sub_AAFEF8(selfIf, BuffInterface_TypeInfo, 1LL);
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
          v79 = v41->fields.ratioHpHigh;
          if ( v79 >= 1 )
          {
            v80 = selfIf;
            v75 = v41->fields.param;
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
              v84 = sub_AAFEF8(selfIf, BuffInterface_TypeInfo, 1LL);
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
        isParamAddIndividualiry = BattleBuffData_BuffData__isParamAddIndividualiry(v41, 0LL);
        v15 = v127;
        v89 = v133;
        if ( isParamAddIndividualiry )
        {
          v90 = maxBuffRate[2];
          maxBuffRate[2] = BattleBuffData__GetTotalParamAddValue(
                             this,
                             v41,
                             v127->fields.battleData,
                             checkIndividualities,
                             v88)
                         + v90;
          v89 = v133;
        }
        v34 = v42;
        if ( BuffEntity__checkMissText(v89, 0LL) )
        {
          v93 = (System_Int32_array **)BuffEntity__getMissText(v133, 0LL);
          v126->klass = (BattleServantConfConponent_c *)v93;
          sub_B16F98(v126, v93, v94, v95, v96, v97, v98, v99);
        }
        if ( v132 >= 1 )
        {
          plusAction = v127->fields.plusAction;
          if ( plusAction )
          {
            v101 = maxBuffRate[2];
            ActValue_31050648 = BattleBuffData__getActValue_31050648(
                                  this,
                                  plusAction,
                                  v133->fields.vals,
                                  this->fields.wkzero,
                                  checkIndividualities,
                                  0LL,
                                  v92);
            if ( ActValue_31050648 * v101 <= -1000 )
              v103 = 0;
            else
              v103 = ActValue_31050648 * v101 / 1000;
            v34 = v42;
            maxBuffRate[2] = v103;
          }
        }
        v104 = *v13;
        *(_QWORD *)maxBuffRate = (unsigned int)*v13;
        if ( BattleBuffData__CheckBuffRateTypeOrIndiv(this, v41, &maxBuffRate[1], maxBuffRate, v104, v91) )
        {
          v106 = maxBuffRate[1];
          v105 = maxBuffRate[2];
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v107 = System_Math__Max_44463816(0.0, (float)((float)v106 / 1000.0) + 1.0, 0LL) * (float)v105;
          v108 = v107;
          v109 = v107 == INFINITY;
          v110 = -v107;
          if ( !v109 )
            v110 = v108;
          maxBuffRate[2] = (int)v110;
          v111 = *v13;
          v33 = v43;
          v34 = v42;
          if ( *v13 < maxBuffRate[0] )
            v111 = maxBuffRate[0];
          *v13 = v111;
        }
        if ( buffProc )
          ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, BattleBuffData_BuffData_o *, _QWORD, _QWORD, int32_t *, Il2CppMethodPointer))buffProc->klass->vtable._4_PrevAddCalcBuffParam.method)(
            buffProc,
            v41,
            (unsigned int)plusMinus[1],
            (unsigned int)v132,
            &maxBuffRate[2],
            buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.methodPtr);
        plusMinus[1] += maxBuffRate[2] * v132;
      }
    }
  }
  v117 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v118 = 0LL;
    v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v119 - 1) != System_IDisposable_TypeInfo )
    {
      ++v118;
      v119 += 4;
      if ( v118 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_110;
    }
    v120 = v117 + 16LL * *v119 + 312;
  }
  else
  {
LABEL_110:
    v120 = sub_AAFEF8(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v120)(v32, *(_QWORD *)(v120 + 8));
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  bool v10; // w20
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0

  if ( (byte_40FD3BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, isCheckInterval);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_40FD3BB = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 isCheckInterval,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v10 = isCheckInterval;
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, v10, v11);
  if ( !v9 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, v10, v13);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9;
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
          PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_28893760(
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
      sub_B17100(PassiveList, v7, isActiveOnly);
      sub_B170A0();
    }
  }
  count = 0LL;
LABEL_13:
  PassiveList = BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_24:
    sub_B170D4();
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
        PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_28893760(
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
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x25
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v29; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x25
  const MethodInfo *v32; // x5
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-68h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_40FD418 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19);
    byte_40FD418 = 1;
  }
  plusMinus = 0;
  memset(&v34, 0, sizeof(v34));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  plusMinus = 0;
  *actFlg = 0;
  v21 = ActInfo;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v27);
  if ( !v26 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v29);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v34.fields.current;
    if ( BattleBuffData__checkIndiviuality(
           this,
           v21,
           (BattleBuffData_BuffData_o *)v34.fields.current,
           checkIndividualities,
           &plusMinus,
           v32) )
    {
      if ( !current )
        sub_B170D4();
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
    &v34,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return lowTurn;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleBuffData___c__DisplayClass30_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40FD3B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, isCheckInterval);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass30_0__getPassiveList_b__0__, v10);
    sub_B16FFC(&BattleBuffData___c__DisplayClass30_0_TypeInfo, v11);
    byte_40FD3B9 = 1;
  }
  v12 = (BattleBuffData___c__DisplayClass30_0_o *)sub_B170CC(
                                                    BattleBuffData___c__DisplayClass30_0_TypeInfo,
                                                    isCheckInterval,
                                                    method,
                                                    v3,
                                                    v4);
  BattleBuffData___c__DisplayClass30_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.isCheckInterval = isCheckInterval,
        passiveList = this->fields.passiveList,
        v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v13,
                                                                         v14,
                                                                         v15,
                                                                         v16),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass30_0__getPassiveList_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !passiveList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B170D4();
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_40FD3BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    byte_40FD3BD = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B170D4();
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  __int64 v24; // x3
  __int64 v25; // x4
  int v26; // w8
  void *v27; // x25
  unsigned int v28; // w20
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x2
  int32_t v31; // w1
  const MethodInfo *v32; // x1
  int v33; // w23
  BuffMaster_o *buffMst; // x0
  System_Int32_array **Entity; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  System_Func_int__bool__o *v43; // x28
  _BOOL4 v44; // w0
  _BOOL4 v45; // w27
  char v46; // w28
  int v47; // w23
  BattleBuffData_ShowBuffData_o *v48; // x27
  BattleBuffData_BuffData_o *v49; // x26
  __int64 v50; // x27
  int v51; // w8
  void *v52; // x24
  int i; // w27
  BattleBuffData_BuffData_o *v54; // x25
  const MethodInfo *v55; // x2
  _BOOL8 v56; // x0
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  __int64 v59; // x3
  __int64 v60; // x4
  BattleBuffData_ShowBuffData_o *v61; // x26
  BuffMaster_o *v62; // x0
  __int64 v63; // x3
  __int64 v64; // x4
  int v65; // w19
  bool v66; // zf
  _BOOL4 v68; // [xsp+4h] [xbp-6Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // [xsp+8h] [xbp-68h]
  int v71; // [xsp+18h] [xbp-58h]

  v68 = isShowDarkClassRelation;
  if ( (byte_40FD3FF & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, isAtkSide);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v12);
    sub_B16FFC(&BattleBuffData_ShowBuffData_TypeInfo, v13);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass135_0__getRectBuffList_b__0__, v14);
    sub_B16FFC(&BattleBuffData___c__DisplayClass135_0_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_7052/*"HIDE_DEFF_TYPE"*/, v16);
    byte_40FD3FF = 1;
  }
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                  isAtkSide,
                                                                                                  isShowOverwriteClassRelation,
                                                                                                  isShowDarkClassRelation,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( isAtkSide )
    v17 = 108;
  else
    v17 = 109;
  v71 = v17;
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_7052/*"HIDE_DEFF_TYPE"*/, 0LL);
  v19 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
  ActiveList = BattleBuffData__getActiveList(this, 1, v20);
  if ( !ActiveList )
    goto LABEL_87;
  v26 = *((_DWORD *)ActiveList + 6);
  v27 = ActiveList;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
      {
LABEL_88:
        sub_B17100(ActiveList, v22, v23);
        sub_B170A0();
      }
      v49 = (BattleBuffData_BuffData_o *)*((_QWORD *)v27 + (int)v28 + 4);
      v50 = sub_B170CC(BattleBuffData___c__DisplayClass135_0_TypeInfo, v22, v23, v24, v25);
      BattleBuffData___c__DisplayClass135_0___ctor((BattleBuffData___c__DisplayClass135_0_o *)v50, 0LL);
      if ( !v49 )
        break;
      if ( !v49->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v49, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 || v49->fields.isActiveCC )
        {
          ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v49, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 || v49->fields.isActiveCA )
          {
            v29 = BattleBuffData_BuffData__checkState(v49, 8, 0LL);
            v33 = (!v29
                || (!isAtkSide ? (v31 = 1024) : (v31 = 0x2000), v29 = BattleBuffData_BuffData__checkState(v49, v31, 0LL)))
               && !BattleBuffData__isInvalidHide((BattleBuffData_o *)v29, v49, v30);
            buffMst = BattleBuffData__get_buffMst(this, v32);
            if ( !buffMst )
              break;
            Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                              v49->fields.buffId,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !v50 )
              break;
            *(_QWORD *)(v50 + 16) = Entity;
            sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), Entity, v36, v37, v38, v39, v40, v41);
            v42 = *(_QWORD *)(v50 + 16);
            if ( v42 )
            {
              if ( v19 != 0LL && !isAtkSide )
              {
                v43 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v22, v23, v24, v25);
                System_Func_int__bool____ctor(
                  v43,
                  (Il2CppObject *)v50,
                  Method_BattleBuffData___c__DisplayClass135_0__getRectBuffList_b__0__,
                  (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
                v44 = BasicHelper__Any_int__25910576(
                        v19,
                        (System_Func_T__bool__o *)v43,
                        (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
                v42 = *(_QWORD *)(v50 + 16);
                if ( !v42 )
                  break;
                v33 &= !v44;
              }
              v45 = *(_DWORD *)(v42 + 20) == 144 || *(_DWORD *)(v42 + 20) == v71;
              v46 = (v33 & v45) != 0 ? isShowOverwriteClassRelation : v33;
              ActiveList = (void *)BattleBuffData_BuffData__checkState(v49, 4096, 0LL);
              if ( v49->fields.isAct && (v46 & 1) != 0 && ((unsigned __int8)ActiveList & 1) == 0 )
              {
                ActiveList = (void *)BattleBuffData_BuffData__checkState(v49, 512, 0LL);
                if ( ((unsigned __int8)ActiveList & 1) == 0 )
                {
                  v47 = v33 & v45 & v68;
                  v48 = (BattleBuffData_ShowBuffData_o *)sub_B170CC(
                                                           BattleBuffData_ShowBuffData_TypeInfo,
                                                           v22,
                                                           v23,
                                                           v24,
                                                           v25);
                  BattleBuffData_ShowBuffData___ctor_22048876(v48, v49, 0LL);
                  if ( v47 )
                  {
                    if ( !v48 )
                      break;
                    v48->fields.isReady = 0;
                  }
                  if ( !v69 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v69,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
      v26 = *((_DWORD *)v27 + 6);
      if ( (int)++v28 >= v26 )
        goto LABEL_42;
    }
LABEL_87:
    sub_B170D4();
  }
LABEL_42:
  ActiveList = BattleBuffData__getPassiveList(this, 1, v23);
  if ( !ActiveList )
    goto LABEL_87;
  v51 = *((_DWORD *)ActiveList + 6);
  v52 = ActiveList;
  if ( v51 >= 1 )
  {
    for ( i = 0; i < v51; ++i )
    {
      if ( i >= (unsigned int)v51 )
        goto LABEL_88;
      v54 = (BattleBuffData_BuffData_o *)*((_QWORD *)v52 + i + 4);
      if ( !v54 )
        goto LABEL_87;
      if ( !v54->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__checkState(v54, 8, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (void *)BattleBuffData_BuffData__checkState(v54, 4096, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v54, 0LL);
            if ( ((unsigned __int8)ActiveList & 1) == 0 || v54->fields.isActiveCC )
            {
              ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v54, 0LL);
              if ( ((unsigned __int8)ActiveList & 1) == 0 || v54->fields.isActiveCA )
              {
                if ( BattleBuffData_BuffData__isCommandCodeBuff(v54, 0LL)
                  || BattleBuffData_BuffData__IsCommandAssistBuff(v54, 0LL)
                  || !v54->fields.isAct
                  || !(v56 = BattleBuffData__checkBuffSpecialAttack(this, v54, v55))
                  && v54->fields.turn <= 0
                  && v54->fields.count <= 0
                  && !(v56 = BattleBuffData_BuffData__checkState(v54, 4, 0LL))
                  && !(v56 = BattleBuffData_BuffData__checkState(v54, 0x2000, 0LL))
                  && (isAtkSide || !(v56 = BattleBuffData_BuffData__checkState(v54, 1024, 0LL)))
                  || BattleBuffData__isInvalidHide((BattleBuffData_o *)v56, v54, v57) )
                {
                  ActiveList = (void *)BattleBuffData_BuffData__isActiveCommandCode(v54, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_84;
                  if ( !v54->fields.isAct )
                    goto LABEL_84;
                  ActiveList = (void *)BattleBuffData_BuffData__checkState(v54, 4, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_84;
                  v61 = (BattleBuffData_ShowBuffData_o *)sub_B170CC(
                                                           BattleBuffData_ShowBuffData_TypeInfo,
                                                           v22,
                                                           v23,
                                                           v59,
                                                           v60);
                  BattleBuffData_ShowBuffData___ctor_22048876(v61, v54, 0LL);
                  if ( !v69 )
                    goto LABEL_87;
                  goto LABEL_83;
                }
                v62 = BattleBuffData__get_buffMst(this, v58);
                if ( !v62 )
                  goto LABEL_87;
                ActiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v62,
                               v54->fields.buffId,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( !ActiveList )
                  goto LABEL_87;
                v65 = *((_DWORD *)ActiveList + 5);
                if ( v65 != v71 && v65 != 144 || isShowOverwriteClassRelation )
                {
                  v61 = (BattleBuffData_ShowBuffData_o *)sub_B170CC(
                                                           BattleBuffData_ShowBuffData_TypeInfo,
                                                           v22,
                                                           v23,
                                                           v63,
                                                           v64);
                  BattleBuffData_ShowBuffData___ctor_22048876(v61, v54, 0LL);
                  v66 = v65 == 144 || v65 == v71;
                  if ( v66 && v68 )
                  {
                    if ( !v61 )
                      goto LABEL_87;
                    v61->fields.isReady = 0;
                  }
                  if ( !v69 )
                    goto LABEL_87;
LABEL_83:
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v69,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
LABEL_84:
      v51 = *((_DWORD *)v52 + 6);
    }
  }
  if ( !v69 )
    goto LABEL_87;
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v69,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getReflectionEffectFunction(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BuffList_TYPE_array *v4; // x0
  __int64 v5; // x2
  const MethodInfo *v6; // x4
  BattleBuffData_BuffData_array *BuffList_31020028; // x1
  const MethodInfo *v8; // x2

  if ( (byte_40FD3D7 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TYPE___TypeInfo, method);
    byte_40FD3D7 = 1;
  }
  v4 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v2);
  if ( !v4 )
    sub_B170D4();
  if ( !v4->max_length )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  v4->m_Items[1] = 97;
  BuffList_31020028 = BattleBuffData__getBuffList_31020028(this, v4, 0LL, 0LL, v6);
  return BattleBuffData__geCheckBuffSuccessful(this, BuffList_31020028, v8);
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
  System_Int32_array *PassiveList; // x0
  __int64 v12; // x1
  int max_length; // w8
  System_Int32_array *v14; // x24
  unsigned int v15; // w25
  BattleBuffData_BuffData_o *v16; // x0
  int v17; // w8
  System_Int32_array *v18; // x23
  unsigned int v19; // w24
  BattleBuffData_BuffData_o *v20; // x0

  v10 = 0;
  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = (System_Int32_array *)BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_23;
    max_length = PassiveList->max_length;
    v14 = PassiveList;
    if ( max_length >= 1 )
    {
      v15 = 0;
      v10 = 0;
      while ( v15 < max_length )
      {
        v16 = *(BattleBuffData_BuffData_o **)&v14->m_Items[2 * v15 + 1];
        if ( !v16 )
          goto LABEL_23;
        PassiveList = BattleBuffData_BuffData__GetIndividualty(v16, IsIncludeIgnoreIndividuality, 0, 0, 0LL);
        if ( PassiveList )
        {
          PassiveList = (System_Int32_array *)Individuality__CheckIndividualities(PassiveList, indv, 0LL);
          v10 += (unsigned __int8)PassiveList & 1;
        }
        max_length = v14->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_13;
      }
LABEL_22:
      sub_B17100(PassiveList, v12, isActiveOnly);
      sub_B170A0();
    }
    v10 = 0;
  }
LABEL_13:
  PassiveList = (System_Int32_array *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_23:
    sub_B170D4();
  v17 = PassiveList->max_length;
  v18 = PassiveList;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      v20 = *(BattleBuffData_BuffData_o **)&v18->m_Items[2 * v19 + 1];
      if ( !v20 )
        goto LABEL_23;
      PassiveList = BattleBuffData_BuffData__GetIndividualty(
                      v20,
                      IsIncludeIgnoreIndividuality,
                      isIgnoreIndivUnreleaseable,
                      0,
                      0LL);
      if ( PassiveList )
      {
        PassiveList = (System_Int32_array *)Individuality__CheckIndividualities(PassiveList, indv, 0LL);
        v10 += (unsigned __int8)PassiveList & 1;
      }
      v17 = v18->max_length;
      if ( (int)++v19 >= v17 )
        return v10;
    }
    goto LABEL_22;
  }
  return v10;
}


BattleBuffData_SaveData_o *__fastcall BattleBuffData__getSaveData(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleBuffData_SaveData_o *result; // x0

  if ( (byte_40FD3FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    sub_B16FFC(&BattleBuffData_SaveData_TypeInfo, v6);
    byte_40FD3FB = 1;
  }
  v7 = sub_B170CC(BattleBuffData_SaveData_TypeInfo, method, v2, v3, v4);
  BattleBuffData_SaveData___ctor((BattleBuffData_SaveData_o *)v7, 0LL);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (v9 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
        !v7)
    || (*(_QWORD *)(v7 + 16) = v9,
        sub_B16F98((BattleServantConfConponent_o *)(v7 + 16), v9, v10, v11, v12, v13, v14, v15),
        (activeList = this->fields.activeList) == 0LL) )
  {
    sub_B170D4();
  }
  v17 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  *(_QWORD *)(v7 + 24) = v17;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 24), v17, v18, v19, v20, v21, v22, v23);
  result = (BattleBuffData_SaveData_o *)v7;
  *(_DWORD *)(v7 + 32) = this->fields.addBuffOrder;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListActive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  const MethodInfo *v10; // x2
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v15; // x20
  unsigned int v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x21

  if ( (byte_40FD3C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_40FD3C8 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = BattleBuffData__getActiveList(this, 1, v10);
  if ( !ActiveList )
    goto LABEL_16;
  max_length = ActiveList->max_length;
  v15 = ActiveList;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(ActiveList, v12, v13);
        sub_B170A0();
      }
      v17 = &v15->obj.klass + (int)v16;
      v18 = (BattleBuffData_BuffData_o *)v17[4];
      if ( !v18 )
        break;
      ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                      (BattleBuffData_BuffData_o *)v17[4],
                                                      8,
                                                      0LL);
      if ( ((unsigned __int8)ActiveList & 1) == 0 )
      {
        ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v18, 4096, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                          (BattleBuffData_o *)ActiveList,
                                                          v18,
                                                          v13);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
        }
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v9 )
    goto LABEL_16;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListPassive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  const MethodInfo *v10; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v15; // x21
  unsigned int v16; // w23
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x22
  const MethodInfo *v19; // x2

  if ( (byte_40FD3C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_40FD3C9 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v10);
  if ( !PassiveList )
    goto LABEL_23;
  max_length = PassiveList->max_length;
  v15 = PassiveList;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(PassiveList, v12, v13);
        sub_B170A0();
      }
      v17 = &v15->obj.klass + (int)v16;
      v18 = (BattleBuffData_BuffData_o *)v17[4];
      if ( !v18 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                       (BattleBuffData_BuffData_o *)v17[4],
                                                       8,
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) == 0 )
      {
        PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v18, 4096, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                           (BattleBuffData_o *)PassiveList,
                                                           v18,
                                                           v13);
          if ( ((unsigned __int8)PassiveList & 1) == 0 )
          {
            if ( BattleBuffData_BuffData__checkState(v18, 512, 0LL)
              || BattleBuffData_BuffData__checkState(v18, 0x2000, 0LL)
              || BattleBuffData__checkBuffSpecialAttack(this, v18, v19)
              || v18->fields.turn > 0
              || v18->fields.count > 0
              || BattleBuffData_BuffData__checkState(v18, 2, 0LL)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v18, 4, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0) )
            {
              if ( !v9 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v9,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_21;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_23;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getShowServantParam(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  BattleBuffData_o *v39; // x0
  const MethodInfo *v40; // x2

  if ( (byte_40FD3C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v10);
    sub_B16FFC(&Method_BattleBuffData___c__DisplayClass39_0__getShowServantParam_b__0__, v11);
    sub_B16FFC(&BattleBuffData___c__DisplayClass39_0_TypeInfo, v12);
    byte_40FD3C2 = 1;
  }
  v13 = sub_B170CC(BattleBuffData___c__DisplayClass39_0_TypeInfo, method, v2, v3, v4);
  BattleBuffData___c__DisplayClass39_0___ctor((BattleBuffData___c__DisplayClass39_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  v25 = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **)(v13 + 24);
  *(_QWORD *)(v13 + 24) = v24;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
  v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v32,
                                                                               v33,
                                                                               v34,
                                                                               v35);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v36,
    (Il2CppObject *)v13,
    Method_BattleBuffData___c__DisplayClass39_0__getShowServantParam_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v36,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)v36,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        BattleBuffData__CheckDummyBuffData(v39, *v25, v40),
        !*v25) )
  {
LABEL_8:
    sub_B170D4();
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)*v25,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
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
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  double NumericValue; // d0
  int v13; // w8
  int max_length; // w9
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = value;
  if ( (byte_40FD41B & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, *(_QWORD *)&value);
    sub_B16FFC(&char_TypeInfo, v3);
    byte_40FD41B = 1;
  }
  v4 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, 3LL, method);
  v5 = System_Int32__ToString((int32_t)&v16, 0LL);
  if ( !v5 )
LABEL_18:
    sub_B170D4();
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
      v13 = (int)NumericValue - 1;
      if ( v13 >= 0 )
      {
        if ( !v4 )
          goto LABEL_18;
        max_length = v4->max_length;
        if ( v13 < max_length )
        {
          if ( v13 >= (unsigned int)max_length )
          {
            sub_B17100(v9, v10, v11);
            sub_B170A0();
          }
          v4->m_Items[v13 + 4] = 1;
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
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x2
  System_Boolean_array *SkillSealSelectListFromValue; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x8
  il2cpp_array_size_t max_length; // w10
  const MethodInfo *v32; // x5
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_40FD419 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, checkIndividualities);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_40FD419 = 1;
  }
  plusMinus = 0;
  memset(&v35, 0, sizeof(v35));
  v13 = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, method);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(99, 0LL, 0LL);
  plusMinus = 0;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v20);
  if ( !v19 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v22);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v35.fields.current;
    v25 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v35.fields.current,
            checkIndividualities,
            &plusMinus,
            v32);
    if ( v25 )
    {
      if ( !current )
        sub_B170D4();
      SkillSealSelectListFromValue = BattleBuffData__getSkillSealSelectListFromValue(
                                       (BattleBuffData_o *)v25,
                                       HIDWORD(current[1].monitor),
                                       v26);
      if ( !SkillSealSelectListFromValue )
        sub_B170D4();
      if ( (int)*(_QWORD *)&SkillSealSelectListFromValue->max_length >= 1 )
      {
        v30 = 0LL;
        max_length = *(_QWORD *)&SkillSealSelectListFromValue->max_length;
        do
        {
          if ( v30 >= max_length )
          {
            sub_B17100(SkillSealSelectListFromValue, v28, v29);
            sub_B170A0();
          }
          if ( SkillSealSelectListFromValue->m_Items[v30 + 4] )
          {
            if ( !v13 )
              sub_B170D4();
            if ( v30 >= v13->max_length )
            {
              sub_B17100(SkillSealSelectListFromValue, v28, v29);
              sub_B170A0();
            }
            v13->m_Items[v30 + 1] = HIDWORD(current[1].klass);
          }
          max_length = SkillSealSelectListFromValue->max_length;
          ++v30;
        }
        while ( (__int64)v30 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v13;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getTDTypeChangeBuffData(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  const MethodInfo *v9; // x5
  BattleBuffData_BuffData_array *BuffList_31040328; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleBuffData_BuffData_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int max_length; // w8
  int v20; // w9
  int v21; // w10
  BattleBuffData_BuffData_o *v22; // x11
  int addOrder; // w12
  bool v24; // cc

  if ( (byte_40FD3FA & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_BuffData_TypeInfo, servantData);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_40FD3FA = 1;
  }
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      servantData,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, servantData, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffList_31040328 = BattleBuffData__getBuffList_31040328(this, 86, v8, 1, 0, v9);
  v15 = (BattleBuffData_BuffData_o *)sub_B170CC(BattleBuffData_BuffData_TypeInfo, v11, v12, v13, v14);
  BattleBuffData_BuffData___ctor(v15, 0LL);
  if ( !BuffList_31040328 )
    goto LABEL_15;
  max_length = BuffList_31040328->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = -1;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
      {
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
      v22 = BuffList_31040328->m_Items[v20];
      if ( !v22 )
        break;
      addOrder = v22->fields.addOrder;
      ++v20;
      v24 = v21 < addOrder;
      if ( v21 < addOrder )
        v21 = v22->fields.addOrder;
      if ( v24 )
        v15 = v22;
      if ( v20 >= max_length )
        return v15;
    }
LABEL_15:
    sub_B170D4();
  }
  return v15;
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

  if ( (byte_40FD415 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40FD415 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B170D4();
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

  if ( (byte_40FD3CD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FD3CD = 1;
  }
  tmpBuffMst = this->fields._tmpBuffMst;
  p_tmpBuffMst = (BattleServantConfConponent_o *)&this->fields._tmpBuffMst;
  result = tmpBuffMst;
  if ( !tmpBuffMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
    p_tmpBuffMst->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B16F98(p_tmpBuffMst, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo *v9; // x1
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v12; // x19
  double v13; // d8
  bool v14; // w20
  int32_t pal[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD401 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_40FD401 = 1;
  }
  *(_QWORD *)pal = 0LL;
  if ( !buff )
    goto LABEL_18;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, v9);
  if ( !buffMst
    || (Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                   buff->fields.buffId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  v12 = Entity;
  if ( !BuffEntity__isConditionsHp(Entity, 0LL) )
    return 0;
  *(_QWORD *)pal = 0LL;
  v13 = (double)now * 1000.0 / (double)max;
  if ( BuffEntity__isCondition(v12, 0, &pal[1], 0LL) && BuffEntity__isCondition(v12, 1, pal, 0LL) )
  {
    if ( v13 < (double)pal[1] )
      return 0;
    return v13 <= (double)pal[0];
  }
  v14 = 0;
  if ( BuffEntity__isCondition(v12, 0, &pal[1], 0LL) )
    v14 = v13 >= (double)pal[1];
  if ( BuffEntity__isCondition(v12, 1, pal, 0LL) )
    return v13 <= (double)pal[0];
  return v14;
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
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  il2cpp_array_size_t v33; // w24
  il2cpp_array_size_t v34; // w25
  System_Collections_Generic_List_int__o *v35; // x21
  int32_t IndividualitieCountAbove; // w22
  int32_t IndividualitieCountBelow; // w23
  System_Int32_array *v38; // x19
  __int64 v39; // x2
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Int32_array *v45; // x20
  System_Func_T1__T2__TResult__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Func_T1__T2__TResult__o *v51; // x22
  System_Int32_array *v52; // x0
  System_Int32_array *v53; // x1
  System_Int32_array *v54; // x0
  System_Int32_array *v55; // x19
  System_Int32_array *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Func_T1__T2__TResult__o *v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Func_T1__T2__TResult__o *v66; // x22
  System_Int32_array *v68; // x0
  System_Int32_array *v69; // x19
  System_Int32_array *v70; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Func_T1__T2__T3__T4__TResult__o *v80; // x21
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Func_T1__T2__T3__T4__TResult__o *v85; // x24
  System_Int32_array *v86; // [xsp+0h] [xbp-50h] BYREF
  int32_t pal; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FD405 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    sub_B16FFC(&Method_System_Func_int____int____bool___ctor__, v13);
    sub_B16FFC(&System_Func_int____int____bool__TypeInfo, v14);
    sub_B16FFC(&Method_System_Func_int____int____int__int__bool___ctor__, v15);
    sub_B16FFC(&System_Func_int____int____int__int__bool__TypeInfo, v16);
    sub_B16FFC(&Method_Individuality_IsMatchArray__, v17);
    sub_B16FFC(&Method_Individuality_IsPartialMatchArrayCount__, v18);
    sub_B16FFC(&Method_Individuality_IsPartialMatchArray__, v19);
    sub_B16FFC(&int___TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737208, v23);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v24);
    byte_40FD405 = 1;
  }
  pal = 0;
  v86 = 0LL;
  if ( !buff )
    goto LABEL_31;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, v25);
  if ( !buffMst )
    goto LABEL_31;
  Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                             buff->fields.buffId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  pal = 0;
  v86 = 0LL;
  if ( !Entity )
    goto LABEL_31;
  v28 = Entity;
  if ( BuffEntity__IsExcludeUnSubStateIndiv(Entity, 0LL) )
    buffIndv = canSubStateBuffIndv;
  if ( !servantIndv || !buffIndv )
    goto LABEL_31;
  v33 = buffIndv->max_length + servantIndv->max_length;
  v34 = fieldIndiv ? fieldIndiv->max_length : 0;
  v35 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor_49346660(
    v35,
    v33 + v34,
    (const MethodInfo_2F0F864 *)Method_System_Collections_Generic_List_int___ctor___66737208);
  if ( !v35 )
    goto LABEL_31;
  System_Collections_Generic_List_int___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)servantIndv,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  System_Collections_Generic_List_int___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)buffIndv,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( fieldIndiv )
    System_Collections_Generic_List_int___AddRange(
      v35,
      (System_Collections_Generic_IEnumerable_T__o *)fieldIndiv,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( BuffEntity__isCondition(v28, 2, &pal, 0LL) )
  {
    IndividualitieCountAbove = BuffEntity__GetIndividualitieCountAbove(v28, 0, 0LL);
    IndividualitieCountBelow = BuffEntity__GetIndividualitieCountBelow(v28, 0, 0LL);
    v38 = System_Collections_Generic_List_int___ToArray(
            v35,
            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    v40 = sub_B17014(int___TypeInfo, 1LL, v39);
    if ( v40 )
    {
      v45 = (System_Int32_array *)v40;
      if ( !*(_DWORD *)(v40 + 24) )
      {
        sub_B17100(v40, v41, v42);
        sub_B170A0();
      }
      *(_DWORD *)(v40 + 32) = pal;
      if ( IndividualitieCountAbove >= 1 || IndividualitieCountBelow >= 1 )
      {
        v80 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B170CC(
                                                          System_Func_int____int____int__int__bool__TypeInfo,
                                                          v41,
                                                          v42,
                                                          v43,
                                                          v44);
        System_Func_object__object__int__int__bool____ctor(
          v80,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_2B79B90 *)Method_System_Func_int____int____int__int__bool___ctor__);
        v85 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B170CC(
                                                          System_Func_int____int____int__int__bool__TypeInfo,
                                                          v81,
                                                          v82,
                                                          v83,
                                                          v84);
        System_Func_object__object__int__int__bool____ctor(
          v85,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_2B79B90 *)Method_System_Func_int____int____int__int__bool___ctor__);
        return Individuality__CheckSignedIndividualitiesCount(
                 v38,
                 v45,
                 (System_Func_int____int____int__int__bool__o *)v80,
                 (System_Func_int____int____int__int__bool__o *)v85,
                 IndividualitieCountAbove,
                 IndividualitieCountBelow,
                 0LL);
      }
      v46 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v41, v42, v43, v44);
      System_Func_object__object__bool____ctor(
        v46,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
      v51 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v47, v48, v49, v50);
      System_Func_object__object__bool____ctor(
        v51,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
      v52 = v38;
      v53 = v45;
      return Individuality__CheckSignedIndividualities_28893348(
               v52,
               v53,
               (System_Func_int____int____bool__o *)v46,
               (System_Func_int____int____bool__o *)v51,
               0LL);
    }
LABEL_31:
    sub_B170D4();
  }
  if ( !BuffEntity__TryGetConditionParamArray(v28, 3, &v86, 0LL) )
  {
    if ( BuffEntity__TryGetConditionParamArray(v28, 4, &v86, 0LL) )
    {
      v68 = System_Collections_Generic_List_int___ToArray(
              v35,
              (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      v69 = v86;
      v70 = v68;
      v46 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v71, v72, v73, v74);
      System_Func_object__object__bool____ctor(
        v46,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
      v51 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v75, v76, v77, v78);
      System_Func_object__object__bool____ctor(
        v51,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
      v52 = v70;
      v53 = v69;
      return Individuality__CheckSignedIndividualities_28893348(
               v52,
               v53,
               (System_Func_int____int____bool__o *)v46,
               (System_Func_int____int____bool__o *)v51,
               0LL);
    }
    return 0;
  }
  v54 = System_Collections_Generic_List_int___ToArray(
          v35,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v55 = v86;
  v56 = v54;
  v61 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v57, v58, v59, v60);
  System_Func_object__object__bool____ctor(
    v61,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
  v66 = (System_Func_T1__T2__TResult__o *)sub_B170CC(System_Func_int____int____bool__TypeInfo, v62, v63, v64, v65);
  System_Func_object__object__bool____ctor(
    v66,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_2B7542C *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualitiesPartialMatch(
           v56,
           v55,
           (System_Func_int____int____bool__o *)v61,
           (System_Func_int____int____bool__o *)v66,
           0LL);
}


bool __fastcall BattleBuffData__isContainConditionIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0

  if ( (byte_40FD404 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_40FD404 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, (const MethodInfo *)buff);
  if ( !buffMst
    || (Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                   buff->fields.buffId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  return BuffEntity__isConditionIndividuality(Entity, 0LL);
}


bool __fastcall BattleBuffData__isContainConditionsHp(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0

  if ( (byte_40FD403 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_40FD403 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, (const MethodInfo *)buff);
  if ( !buffMst
    || (Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                   buff->fields.buffId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  return BuffEntity__isConditionsHp(Entity, 0LL);
}


bool __fastcall BattleBuffData__isGuts(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x4
  BuffList_c *v11; // x0
  BattleBuffData_o *BuffList_31020028; // x0
  const MethodInfo *v13; // x3

  if ( (byte_40FD3F6 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, buff);
    byte_40FD3F6 = 1;
  }
  *buff = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)buff, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v11 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v11 = BuffList_TypeInfo;
  }
  BuffList_31020028 = (BattleBuffData_o *)BattleBuffData__getBuffList_31020028(
                                            this,
                                            v11->static_fields->GutsList,
                                            0LL,
                                            0LL,
                                            v10);
  return BattleBuffData__checkGutsBuffSuccessfulIndividual(
           BuffList_31020028,
           (BattleBuffData_BuffData_array *)BuffList_31020028,
           buff,
           v13);
}


bool __fastcall BattleBuffData__isHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 8, 0LL);
}


bool __fastcall BattleBuffData__isHideOtherCommand(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 512, 0LL);
}


bool __fastcall BattleBuffData__isIgnoreDefeatPoint(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BuffList_TYPE_array *v4; // x0
  __int64 v5; // x2
  const MethodInfo *v6; // x4
  BattleBuffData_BuffData_array *BuffList_31020028; // x0

  if ( (byte_40FD455 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TYPE___TypeInfo, method);
    byte_40FD455 = 1;
  }
  v4 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v2);
  if ( !v4 )
    goto LABEL_7;
  if ( !v4->max_length )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  v4->m_Items[1] = 184;
  BuffList_31020028 = BattleBuffData__getBuffList_31020028(this, v4, 0LL, 0LL, v6);
  if ( !BuffList_31020028 )
LABEL_7:
    sub_B170D4();
  return BuffList_31020028->max_length != 0;
}


bool __fastcall BattleBuffData__isInvalidHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return !BattleBuffData_BuffData__checkAct(buff, 1, 0LL) && BattleBuffData_BuffData__checkState(buff, 0x8000, 0LL);
}


bool __fastcall BattleBuffData__isShow(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 4, 0LL);
}


bool __fastcall BattleBuffData__isShowDamageAndCommandCardBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 0x2000, 0LL);
}


bool __fastcall BattleBuffData__isShowDeff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 1024, 0LL);
}


bool __fastcall BattleBuffData__isShowStatusBuffOnly(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__checkState(buff, 4096, 0LL);
}


bool __fastcall BattleBuffData__isSphitBuff(BattleBuffData_o *this, int32_t *effectId, const MethodInfo *method)
{
  __int64 v5; // x1
  BattleBuffData_BuffData_array *PassiveList; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v10; // x21
  unsigned int v11; // w24
  BattleBuffData_BuffData_o *v12; // x22
  BuffMaster_o *buffMst; // x0
  WarEntity_o *Entity; // x0
  BuffEntity_o *v15; // x22
  int32_t v16; // w23
  int v17; // w8
  BattleBuffData_BuffData_array *v18; // x21
  unsigned int v19; // w24
  BattleBuffData_BuffData_o *v20; // x22
  BuffMaster_o *v21; // x0
  WarEntity_o *v22; // x0
  int32_t v23; // w23

  if ( (byte_40FD400 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, effectId);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_40FD400 = 1;
  }
  *effectId = 0;
  PassiveList = BattleBuffData__getPassiveList(this, 1, method);
  if ( !PassiveList )
    goto LABEL_33;
  max_length = PassiveList->max_length;
  v10 = PassiveList;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_34;
      v12 = v10->m_Items[v11];
      if ( !v12 )
        goto LABEL_33;
      if ( !v12->fields._isRemove && v12->fields.isAct )
      {
        buffMst = BattleBuffData__get_buffMst(this, v7);
        if ( !buffMst )
          goto LABEL_33;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                   v12->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_33;
        v15 = (BuffEntity_o *)Entity;
        v16 = *(&Entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (BattleBuffData_BuffData_array *)BuffList__isSpHit(v16, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          break;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_17;
    }
LABEL_32:
    *effectId = BuffEntity__getEffectId(v15, 0LL);
    return 1;
  }
LABEL_17:
  PassiveList = BattleBuffData__getActiveList(this, 1, v8);
  if ( !PassiveList )
LABEL_33:
    sub_B170D4();
  v17 = PassiveList->max_length;
  v18 = PassiveList;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      v20 = v18->m_Items[v19];
      if ( !v20 )
        goto LABEL_33;
      if ( !v20->fields._isRemove && v20->fields.isAct )
      {
        v21 = BattleBuffData__get_buffMst(this, v7);
        if ( !v21 )
          goto LABEL_33;
        v22 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)v21,
                v20->fields.buffId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !v22 )
          goto LABEL_33;
        v15 = (BuffEntity_o *)v22;
        v23 = *(&v22->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (BattleBuffData_BuffData_array *)BuffList__isSpHit(v23, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          goto LABEL_32;
      }
      v17 = v18->max_length;
      if ( (int)++v19 >= v17 )
        return 0;
    }
LABEL_34:
    sub_B17100(PassiveList, v7, v8);
    sub_B170A0();
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
    sub_B170D4();
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
    sub_B170D4();
  buffData->fields.isAct = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__removeLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  bool v11; // w22
  const MethodInfo *v12; // x4
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  const MethodInfo *v14; // x4
  System_Collections_Generic_IEnumerable_T__o *v15; // x0

  if ( (byte_40FD3D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, endBuffs);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    byte_40FD3D3 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  endBuffs,
                                                                                                  isCreateDummy,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v11 = isCreateDummy;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v11, 1, v12);
  if ( !v10 )
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    v13,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v11, 0, v14);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    v15,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
}


void __fastcall BattleBuffData__setSaveData(
        BattleBuffData_o *this,
        BattleBuffData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *passiveList; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *activeList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x22

  if ( (byte_40FD3FC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, sv);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B16FFC(&Method_BattleBuffData__setSaveData_b__131_0__, v6);
    sub_B16FFC(&Method_BattleBuffData__setSaveData_b__131_1__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v9);
    byte_40FD3FC = 1;
  }
  if ( !sv )
    goto LABEL_9;
  passiveList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    passiveList,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.passive,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  activeList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.activeList;
  if ( !activeList )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    activeList,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.active,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v12 = this->fields.passiveList;
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v13,
                                                                               v14,
                                                                               v15,
                                                                               v16);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleBuffData__setSaveData_b__131_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( !v12
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v12,
          (System_Action_T__o *)v17,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        v18 = this->fields.activeList,
        v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                     v19,
                                                                                     v20,
                                                                                     v21,
                                                                                     v22),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v23,
          (Il2CppObject *)this,
          Method_BattleBuffData__setSaveData_b__131_1__,
          (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        !v18) )
  {
LABEL_9:
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v18,
    (System_Action_T__o *)v23,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  this->fields.addBuffOrder = sv->fields.addBuffOrder;
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
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  int v8; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-68h] BYREF
  int v10[2]; // [xsp+20h] [xbp-50h]
  int v11; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_40FD3FE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v5);
    byte_40FD3FE = 1;
  }
  memset(&i, 0, sizeof(i));
  v11 = 0;
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        BYTE2(i.fields.current[2].klass) = 0 )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  v10[0] = 52;
  v11 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v11 = 0;
  activeList = this->fields.activeList;
  if ( !activeList )
LABEL_19:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        BYTE2(i.fields.current[2].klass) = 0 )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  v10[0] = 104;
  v8 = ++v11;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  _BOOL4 v20; // w28
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v22; // x0
  WarBoardUiData_SaveData_array *v23; // x0
  WarBoardUiData_SaveData_array *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x24
  BattleBuffData_o *v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x3
  int max_length; // w8
  unsigned int v35; // w20
  int32_t v36; // w25
  bool v37; // w26
  Il2CppClass **v38; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x27
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v42; // x0
  BattleBuffData_BuffData_o *DummyBuff; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v45; // x0
  XWeaponTrail_Element_o *v46; // x2
  const MethodInfo_2F26EEC *v47; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x1
  const MethodInfo_2F25CD8 *v49; // x2
  BattleBuffData_o *v50; // x0
  const MethodInfo *v51; // x3
  RemovedBuffInfo_o *v52; // x0
  const MethodInfo *v53; // x2
  RemovedBuffInfo_o *v54; // x20

  if ( (byte_40FD3EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, individualities);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19);
    byte_40FD3EC = 1;
  }
  v20 = fromHead == 0 && fromTail > 0;
  if ( v20 )
  {
    activeList = this->fields.activeList;
    if ( !activeList )
      goto LABEL_34;
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)activeList,
      (const MethodInfo_2F27B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__);
    fromHead = fromTail;
  }
  v22 = this->fields.activeList;
  if ( !v22 )
    goto LABEL_34;
  v23 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_34;
  v24 = v23;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v24 )
    goto LABEL_34;
  max_length = v24->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    v36 = 0;
    v37 = isForceSubState;
    do
    {
      if ( v35 >= max_length )
      {
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      v38 = &v24->obj.klass + (int)v35;
      v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)v38[4];
      if ( !v39 )
        goto LABEL_34;
      if ( BattleBuffData_BuffData__RemoveBuffCond(
             (BattleBuffData_BuffData_o *)v38[4],
             fromHead,
             v36,
             individualities,
             v37,
             0LL) )
      {
        if ( !v29 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v39,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( v39[1].fields.targetId )
        {
          auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
          if ( !auraBuffList )
            goto LABEL_34;
          if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                 auraBuffList,
                 (WarBoardManager_TaskList_o *)v39,
                 (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
          {
            v42 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
            if ( !v42 )
              goto LABEL_34;
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              v42,
              (WarBoardManager_TaskList_o *)v39,
              (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          }
        }
        BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v39, v40);
        ++v36;
        if ( !isCreateDummy )
          goto LABEL_31;
        DummyBuff = BattleBuffData__CreateDummyBuff(v30, (BattleBuffData_BuffData_o *)v39, v32);
        if ( !this->fields.activeList )
          goto LABEL_34;
        v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)DummyBuff;
        if ( !v20 )
        {
          v45 = this->fields.activeList;
          v48 = v44;
          v49 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          goto LABEL_30;
        }
        v45 = this->fields.activeList;
        v46 = (XWeaponTrail_Element_o *)v44;
        v47 = (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      else
      {
        v45 = this->fields.activeList;
        if ( !v45 )
          goto LABEL_34;
        if ( !v20 )
        {
          v48 = v39;
          v49 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
LABEL_30:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45,
            v48,
            v49);
          goto LABEL_31;
        }
        v46 = (XWeaponTrail_Element_o *)v39;
        v47 = (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v45,
        0,
        v46,
        v47);
LABEL_31:
      max_length = v24->max_length;
    }
    while ( (int)++v35 < max_length );
  }
  v50 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v29,
                              isCreateDummy,
                              v33);
  v52 = BattleBuffData__MakeRemoveBuffInfo(
          v50,
          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v29,
          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v50,
          v51);
  if ( !v52 )
LABEL_34:
    sub_B170D4();
  v54 = v52;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(this, v52->fields._RemovedAllBuffList_k__BackingField, v53);
  return v54;
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *linkedArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  BattleBuffData___c_c *v21; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__72_0; // x22
  Il2CppObject *v24; // x23
  struct BattleBuffData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_T__o *All; // x0
  WarBoardUiData_SaveData_array *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  BattleBuffData___c_c *v38; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x22
  BattleBuffData_BuffData_array *v40; // x21
  struct BattleBuffData___c_StaticFields *v41; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__72_1; // x23
  Il2CppObject *v43; // x24
  struct BattleBuffData___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_T__o *v51; // x0
  WarBoardUiData_SaveData_array *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  const MethodInfo *v55; // x4
  __int64 v56; // x8
  BattleBuffData_BuffData_array *v57; // x22
  unsigned __int64 v58; // x24
  BattleBuffData_BuffData_o *v59; // x23
  const MethodInfo *v60; // x4
  System_Collections_Generic_List_BattleBuffData_BuffData__o *reflectedBuffList; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FD3D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, linkedArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___66753760, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B16FFC(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__72_0__, v12);
    sub_B16FFC(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__72_1__, v13);
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v14);
    byte_40FD3D5 = 1;
  }
  reflectedBuffList = 0LL;
  if ( !linkedArray )
    goto LABEL_31;
  if ( !*(_QWORD *)&linkedArray->max_length )
    return;
  v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                          linkedArray,
                                                                          method,
                                                                          v3,
                                                                          v4);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)linkedArray,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___66753760);
  reflectedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15;
  activeList = this->fields.activeList;
  v21 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v21 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__72_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__72_0;
  if ( !_9__72_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__72_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v16,
                                                                          v17,
                                                                          v18,
                                                                          v19);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__72_0,
      v24,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__72_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v25 = BattleBuffData___c_TypeInfo->static_fields;
    v25->__9__72_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__72_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__72_0,
      (System_Int32_array **)_9__72_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !activeList )
    goto LABEL_31;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__72_0,
          (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_31;
  v33 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v38 = BattleBuffData___c_TypeInfo;
  passiveList = this->fields.passiveList;
  v40 = (BattleBuffData_BuffData_array *)v33;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v38 = BattleBuffData___c_TypeInfo;
  }
  v41 = v38->static_fields;
  _9__72_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v41->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v41 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)v41->__9;
    _9__72_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v34,
                                                                          v35,
                                                                          v36,
                                                                          v37);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__72_1,
      v43,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__72_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v44 = BattleBuffData___c_TypeInfo->static_fields;
    v44->__9__72_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__72_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v44->__9__72_1,
      (System_Int32_array **)_9__72_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !passiveList
    || (v51 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                (System_Predicate_T__o *)_9__72_1,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
LABEL_31:
    sub_B170D4();
  }
  v52 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v56 = *(_QWORD *)&linkedArray->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = (BattleBuffData_BuffData_array *)v52;
    v58 = 0LL;
    do
    {
      if ( v58 >= (unsigned int)v56 )
      {
        sub_B17100(v52, v53, v54);
        sub_B170A0();
      }
      v59 = linkedArray->m_Items[v58];
      BattleBuffData__syncLinkageBuffChangeParam_31019176(this, v59, v40, &reflectedBuffList, v55);
      BattleBuffData__syncLinkageBuffChangeParam_31019176(this, v59, v57, &reflectedBuffList, v60);
      LODWORD(v56) = linkedArray->max_length;
      ++v58;
    }
    while ( (__int64)v58 < (int)v56 );
  }
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam_31019176(
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
  _BOOL4 IsFamilyBuff; // w0
  _BOOL4 v14; // w24
  System_Int32_array *linkageTargetIndividualty; // x24
  System_Int32_array *LinkageIdArray; // x0
  const MethodInfo *v17; // x4

  v8 = this;
  if ( (byte_40FD3D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, linkedBuff);
    this = (BattleBuffData_o *)sub_B16FFC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v9);
    byte_40FD3D6 = 1;
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
        sub_B17100(this, linkedBuff, checkArray);
        sub_B170A0();
      }
      if ( !*reflectedBuffList )
        break;
      v12 = checkArray->m_Items[v11];
      this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)*reflectedBuffList,
                                   (WarBoardManager_TaskList_o *)v12,
                                   (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v12 )
          break;
        IsFamilyBuff = BattleBuffData_BuffData__IsFamilyBuff(v12, 0LL);
        if ( !linkedBuff )
          break;
        v14 = IsFamilyBuff;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(linkedBuff, 0LL);
        if ( ((v14 ^ (unsigned int)this) & 1) == 0 )
        {
          linkageTargetIndividualty = linkedBuff->fields.linkageTargetIndividualty;
          LinkageIdArray = BattleBuffData_BuffData__get_LinkageIdArray(v12, 0LL);
          this = (BattleBuffData_o *)Individuality__IsPartialMatchArray(linkageTargetIndividualty, LinkageIdArray, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12->fields.turn = linkedBuff->fields.turn;
            v12->fields.count = linkedBuff->fields.count;
            if ( !*reflectedBuffList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*reflectedBuffList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            BattleBuffData__syncLinkageBuffChangeParam_31019176(v8, v12, checkArray, reflectedBuffList, v17);
          }
        }
      }
      LODWORD(v10) = checkArray->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        return;
    }
LABEL_17:
    sub_B170D4();
  }
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__turnProgressing(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  BaseBattleEvent_o *BattleEvent; // x0
  __int64 v10; // x2
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *v12; // x0
  int32_t v13; // w0
  const MethodInfo *v14; // x4

  if ( (byte_40FD3CE & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_BuffData___TypeInfo, logic);
    byte_40FD3CE = 1;
  }
  if ( !logic )
    goto LABEL_10;
  BattleEvent = BattleLogic__get_BattleEvent(logic, 0LL);
  if ( !BattleEvent )
    goto LABEL_10;
  if ( (((__int64 (__fastcall *)(BaseBattleEvent_o *, _QWORD, Il2CppMethodPointer))BattleEvent->klass->vtable._31_CheckBuffCommonProgressTurn.method)(
          BattleEvent,
          (unsigned int)svtUniqueId,
          BattleEvent->klass->vtable._32_ProgressBuffTurn.methodPtr) & 1) != 0 )
  {
    data = logic->fields.data;
    if ( data )
    {
      v12 = data->fields.battleEvent;
      if ( v12 )
      {
        v13 = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._33_MakeTurnCondStateByServant.method)(
                v12,
                (unsigned int)svtUniqueId,
                v12->klass->vtable._34_ProgressNoExecJoinServantsBuff.methodPtr);
        return BattleBuffData__CommonTurnProgressing(this, logic, isEndEnemyTurn, v13, v14);
      }
    }
LABEL_10:
    sub_B170D4();
  }
  return (BattleBuffData_BuffData_array *)sub_B17014(BattleBuffData_BuffData___TypeInfo, 0LL, v10);
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
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v10; // x8
  BattleBuffData_o *v11; // x19
  unsigned __int64 v12; // x20

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
    sub_B17100(PassiveList, v5, v6);
    sub_B170A0();
  }
LABEL_6:
  PassiveList = (BattleBuffData_o *)BattleBuffData__getActiveList(this, 1, v6);
  if ( !PassiveList )
LABEL_13:
    sub_B170D4();
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
        v6);
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v10; // x21

  if ( (byte_40FD3C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleBuffData__updateAuraBuffList_b__38_0__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v6);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8);
    byte_40FD3C1 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v10 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleBuffData__updateAuraBuffList_b__38_0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !auraBuffList )
    sub_B170D4();
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)auraBuffList,
    (System_Predicate_T__o *)v10,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__useGuts(
        BattleBuffData_o *this,
        int32_t maxhp,
        System_String_o **motionName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  BuffList_c *v13; // x0
  BattleBuffData_o *BuffList_31020028; // x0
  const MethodInfo *v15; // x2
  BattleBuffData_BuffData_o *BuffSuccessfulIndividual; // x0
  const MethodInfo *v17; // x1
  BattleBuffData_BuffData_o *v18; // x22
  int32_t param; // w8
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v22; // x21
  System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t type; // w20
  bool v31; // w0
  unsigned __int64 v32; // x8

  if ( (byte_40FD3F7 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&maxhp);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v11);
    byte_40FD3F7 = 1;
  }
  *motionName = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)motionName,
    0LL,
    (System_String_array **)motionName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v13 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v13 = BuffList_TypeInfo;
  }
  BuffList_31020028 = (BattleBuffData_o *)BattleBuffData__getBuffList_31020028(
                                            this,
                                            v13->static_fields->GutsList,
                                            0LL,
                                            0LL,
                                            v12);
  BuffSuccessfulIndividual = BattleBuffData__getBuffSuccessfulIndividual(
                               BuffList_31020028,
                               (BattleBuffData_BuffData_array *)BuffList_31020028,
                               v15);
  if ( !BuffSuccessfulIndividual )
    goto LABEL_17;
  v18 = BuffSuccessfulIndividual;
  if ( BuffSuccessfulIndividual->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, v17);
  if ( !buffMst
    || (Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                   v18->fields.buffId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  v22 = Entity;
  v23 = BuffEntity__GetMotionName(Entity, 0LL);
  *motionName = v23;
  sub_B16F98((BattleServantConfConponent_o *)motionName, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  type = v22->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v31 = BuffList__CheckType(104, type, 0LL);
  param = v18->fields.param;
  if ( v31 )
  {
    v32 = (unsigned __int128)(param * (__int64)maxhp * (__int128)0x20C49BA5E353F7CFLL) >> 64;
    return (v32 >> 7) + (v32 >> 63);
  }
  return param;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__usedProgressing(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_T__o *ActiveArrayNoActAfterUsed; // x0
  WarBoardUiData_SaveData_array *v24; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int max_length; // w8
  WarBoardUiData_SaveData_array *v28; // x21
  unsigned int v29; // w24
  BuffMaster_o *buffMst; // x0
  WarEntity_o *Entity; // x0
  int32_t v32; // w23
  int32_t count; // w8
  bool v34; // vf
  int v35; // w8
  BattleBuffData_BuffData_o *v36; // x22

  if ( (byte_40FD3DA & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_40FD3DA = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v18);
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v20);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveArrayNoActAfterUsed = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveArrayNoActAfterUsed(
                                                                               this,
                                                                               v22);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    ActiveArrayNoActAfterUsed,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v24 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !v24 )
    goto LABEL_25;
  max_length = v24->max_length;
  v28 = v24;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
      {
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      v36 = (BattleBuffData_BuffData_o *)v28->m_Items[v29];
      if ( !v36 )
        break;
      if ( !v36->fields._isRemove && v36->fields.isDecide )
      {
        buffMst = BattleBuffData__get_buffMst(this, v25);
        if ( !buffMst )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                   v36->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !Entity )
          break;
        v32 = *(&Entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v24 = (WarBoardUiData_SaveData_array *)BuffList__CheckGutsType(v32, 0LL);
        if ( ((unsigned __int8)v24 & 1) == 0 )
        {
          if ( v36->fields.isUse )
          {
            count = v36->fields.count;
            v34 = __OFSUB__(count, 1);
            v35 = count - 1;
            if ( v35 < 0 == v34 )
            {
              v36->fields.count = v35;
              v24 = (WarBoardUiData_SaveData_array *)BattleBuffData_BuffData__IslinkageTarget(v36, 0LL);
              if ( ((unsigned __int8)v24 & 1) != 0 )
              {
                if ( !v12 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v36->fields.isUse = 0;
          v36->fields.isDecide = 0;
        }
      }
      max_length = v28->max_length;
      if ( (int)++v29 >= max_length )
        return BattleBuffData__RemoveProgressingBuffList(
                 this,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v12,
                 v26);
    }
LABEL_25:
    sub_B170D4();
  }
  return BattleBuffData__RemoveProgressingBuffList(
           this,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v12,
           v26);
}


void __fastcall BattleBuffData__usedProgressingGuts(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  WarBoardUiData_SaveData_array *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int max_length; // w8
  WarBoardUiData_SaveData_array *v26; // x21
  unsigned int v27; // w24
  BuffMaster_o *buffMst; // x0
  WarEntity_o *Entity; // x0
  int32_t v30; // w23
  int32_t count; // w8
  bool v32; // vf
  int v33; // w8
  BattleBuffData_BuffData_o *v34; // x22

  if ( (byte_40FD3DC & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_40FD3DC = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v18);
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    PassiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v20);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    ActiveList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v22 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !v22 )
    goto LABEL_25;
  max_length = v22->max_length;
  v26 = v22;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
      {
        sub_B17100(v22, v23, v24);
        sub_B170A0();
      }
      v34 = (BattleBuffData_BuffData_o *)v26->m_Items[v27];
      if ( !v34 )
        break;
      if ( !v34->fields._isRemove && v34->fields.isDecide )
      {
        buffMst = BattleBuffData__get_buffMst(this, v23);
        if ( !buffMst )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                   v34->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !Entity )
          break;
        v30 = *(&Entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v22 = (WarBoardUiData_SaveData_array *)BuffList__CheckGutsType(v30, 0LL);
        if ( ((unsigned __int8)v22 & 1) != 0 )
        {
          if ( v34->fields.isUse )
          {
            count = v34->fields.count;
            v32 = __OFSUB__(count, 1);
            v33 = count - 1;
            if ( v33 < 0 == v32 )
            {
              v34->fields.count = v33;
              v22 = (WarBoardUiData_SaveData_array *)BattleBuffData_BuffData__IslinkageTarget(v34, 0LL);
              if ( ((unsigned __int8)v22 & 1) != 0 )
              {
                if ( !v12 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v34->fields.isUse = 0;
          v34->fields.isDecide = 0;
        }
      }
      max_length = v26->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_24;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_24:
  BattleBuffData__RemoveProgressingBuffList(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v12,
    v24);
}


void __fastcall BattleBuffData_ActValueRequest___ctor(
        BattleBuffData_ActValueRequest_o *this,
        int32_t buffAction,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualitiesData,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BuffAction_k__BackingField = buffAction;
  this->fields._CheckIndividualitiesData_k__BackingField = checkIndividualitiesData;
  sub_B16F98(&this->fields._CheckIndividualitiesData_k__BackingField, checkIndividualitiesData);
  this->fields._BuffIf_k__BackingField = buffIf;
  sub_B16F98(&this->fields._BuffIf_k__BackingField, buffIf);
}


BuffList_ActInfo_o *__fastcall BattleBuffData_ActValueRequest__get_ActInfo(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  struct BuffList_ActInfo_o **p_actInfo; // x19
  BuffList_ActInfo_o *actInfo; // x21
  int32_t BuffAction_k__BackingField; // w20

  if ( (byte_40F84D5 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    byte_40F84D5 = 1;
  }
  p_actInfo = &this->fields.actInfo;
  actInfo = this->fields.actInfo;
  if ( !actInfo )
  {
    BuffAction_k__BackingField = this->fields._BuffAction_k__BackingField;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    actInfo = BuffList__getActInfo(BuffAction_k__BackingField, 0LL, 0LL);
    *p_actInfo = actInfo;
    sub_B16F98(p_actInfo, actInfo);
  }
  return actInfo;
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

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.ActValueRequest = actValueRequest;
  sub_B16F98(&v12->fields, actValueRequest);
  v12->fields._Text_k__BackingField = text;
  v12 = (BattleBuffData_ActValueResponse_o *)((char *)v12 + 40);
  v12[-1].fields._LowerParam_k__BackingField = value;
  *(&v12[-1].fields._LowerParam_k__BackingField + 1) = upperParam;
  LODWORD(v12[-1].fields._Text_k__BackingField) = lowerParam;
  sub_B16F98(v12, text);
}


int32_t __fastcall BattleBuffData_ActValueResponse__GetClampedValue(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  BattleBuffData_ActValueRequest_o *ActValueRequest; // x0
  BuffList_ActInfo_o *ActInfo; // x0
  BuffList_ActInfo_o *v5; // x20
  int v6; // w21
  int32_t LowerParam_k__BackingField; // w22
  int32_t v8; // w21

  if ( (byte_40F84D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, method);
    byte_40F84D6 = 1;
  }
  ActValueRequest = this->fields.ActValueRequest;
  if ( !ActValueRequest || (ActInfo = BattleBuffData_ActValueRequest__get_ActInfo(ActValueRequest, method)) == 0LL )
    sub_B170D4();
  v5 = ActInfo;
  v6 = ActInfo->fields.baseParam + this->fields._Value_k__BackingField;
  if ( BuffList_ActInfo__isLowerLimit(ActInfo, 0LL) )
  {
    LowerParam_k__BackingField = this->fields._LowerParam_k__BackingField;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v6 = System_Math__Max_44463768(LowerParam_k__BackingField, v6, 0LL);
  }
  v8 = v6 - v5->fields.baseValue;
  if ( !BuffList_ActInfo__isUpperLimit(v5, 0LL) )
    return v8;
  if ( this->fields._UpperParam_k__BackingField >= v8 )
    return v8;
  return this->fields._UpperParam_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse__Merge(
        BattleBuffData_ActValueResponse_o *this,
        BattleBuffData_ActValueResponse_o *response,
        const MethodInfo *method)
{
  int32_t UpperParam_k__BackingField; // w21
  int32_t v6; // w22

  if ( (byte_40F84D7 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, response);
    byte_40F84D7 = 1;
  }
  if ( !response )
    sub_B170D4();
  UpperParam_k__BackingField = this->fields._UpperParam_k__BackingField;
  v6 = response->fields._UpperParam_k__BackingField;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this->fields._UpperParam_k__BackingField = System_Math__Max_44463768(UpperParam_k__BackingField, v6, 0LL);
  this->fields._LowerParam_k__BackingField = System_Math__Min_44418752(
                                               this->fields._LowerParam_k__BackingField,
                                               response->fields._LowerParam_k__BackingField,
                                               0LL);
  this->fields._Value_k__BackingField += response->fields._Value_k__BackingField;
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
    sub_B170D4();
  return BattleBuffData_BuffData__CheckCond_22053956(
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


bool __fastcall BattleBuffData_BuffData__CheckCond_22053956(
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
  *plusMinus = 0;
  if ( this->fields.userCommandCodeId >= 1 && !this->fields.isActiveCC
    || BattleBuffData_BuffData__isCommandCardBuff(this, (const MethodInfo *)svtBuff) && !this->fields.isActiveCC
    || this->fields.commandAssistId >= 1 && !this->fields.isActiveCA )
  {
    return 0;
  }
  if ( !svtBuff )
    sub_B170D4();
  return BattleBuffData__checkIndiviuality_31052280(
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


bool __fastcall BattleBuffData_BuffData__CheckCond_22054196(
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
  return BattleBuffData_BuffData__CheckCond_22053956(
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v18; // x21
  bool IsNullOrEmpty; // w0
  __int64 v20; // x2
  struct System_Int32_array *addIndividualty; // x8
  System_Array_o *v22; // x0
  __int64 v23; // x8
  System_Array_o *v24; // x0

  if ( (byte_40F84D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, IsIncludeIgnoreIndividuality);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F84D8 = 1;
  }
  state = this->fields.state;
  if ( (state & 0x10000) != 0 && !IsIncludeIgnoreIndividuality )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, isIgnoreIndivUnreleaseable);
  if ( isIgnoreIndivUnreleaseable )
  {
    if ( isAiCheck )
    {
      if ( (state & 0x80000) != 0 )
        return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, isIgnoreIndivUnreleaseable);
    }
    else if ( (state & 0x880040) != 0 )
    {
      return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, isIgnoreIndivUnreleaseable);
    }
  }
  if ( !this->fields._isRemove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !Entity )
          return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, isIgnoreIndivUnreleaseable);
        v18 = Entity;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                          (System_Collections_ICollection_o *)this->fields.addIndividualty,
                          0LL);
        v13 = *(System_Int32_array **)&v18->fields.bannerId;
        if ( IsNullOrEmpty )
          return v13;
        if ( v13 )
        {
          addIndividualty = this->fields.addIndividualty;
          if ( addIndividualty )
          {
            v22 = (System_Array_o *)sub_B17014(int___TypeInfo, addIndividualty->max_length + v13->max_length, v20);
            if ( *(_QWORD *)&v18->fields.bannerId )
            {
              v13 = (System_Int32_array *)v22;
              System_Array__CopyTo(*(System_Array_o **)&v18->fields.bannerId, v22, 0, 0LL);
              v23 = *(_QWORD *)&v18->fields.bannerId;
              if ( v23 )
              {
                v24 = (System_Array_o *)this->fields.addIndividualty;
                if ( v24 )
                {
                  System_Array__CopyTo(v24, (System_Array_o *)v13, *(_DWORD *)(v23 + 24), 0LL);
                  return v13;
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
  return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, isIgnoreIndivUnreleaseable);
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
  BuffEntity_o *Entity; // x0

  if ( (byte_40F84DD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    byte_40F84DD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   this->fields.buffId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return Entity->fields.type == 32 && BuffEntity__getDamageRelease(Entity, 0LL) == -1;
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

  if ( (byte_40F84DE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F84DE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21
  bool v11; // w0
  int32_t state; // w8
  int v13; // w9
  unsigned int v14; // w8

  if ( (byte_40F84DC & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleServantData____66805536, servantArray);
    sub_B16FFC(&Method_BattleBuffData_BuffData__SetBuffNoActState_b__124_0__, v7);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v9);
    byte_40F84DC = 1;
  }
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             servantArray,
                                                                             method,
                                                                             v3,
                                                                             v4);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleBuffData_BuffData__SetBuffNoActState_b__124_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  v11 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)servantArray,
          (System_Func_T__bool__o *)v10,
          (const MethodInfo_18B6074 *)Method_BasicHelper_Any_BattleServantData____66805536);
  state = this->fields.state;
  v13 = state | 0x200000;
  v14 = state & 0xFFDFFFFF;
  if ( !v11 )
    v14 = v13;
  this->fields.state = v14;
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


bool __fastcall BattleBuffData_BuffData___SetBuffNoActState_b__124_0(
        BattleBuffData_BuffData_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v2; // x2
  struct System_Int32_array *v4; // x8
  struct System_Int32_array **p_servantCardIdsIndexArray; // x19
  struct System_Int32_array *servantCardIdsIndexArray; // t1
  __int64 v7; // x0

  if ( (byte_40F84DB & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F84DB = 1;
  }
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  p_servantCardIdsIndexArray = &this->fields.servantCardIdsIndexArray;
  v4 = servantCardIdsIndexArray;
  if ( !servantCardIdsIndexArray )
  {
    v7 = sub_B17014(int___TypeInfo, 0LL, v2);
    *p_servantCardIdsIndexArray = (struct System_Int32_array *)v7;
    sub_B16F98(p_servantCardIdsIndexArray, v7);
    v4 = *p_servantCardIdsIndexArray;
    if ( !*p_servantCardIdsIndexArray )
      sub_B170D4();
  }
  return v4->max_length != 0;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F84D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F84D9 = 1;
  }
  if ( this->fields._isRemove )
  {
    LOBYTE(Entity) = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               this->fields.buffId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData_BuffData___c__DisplayClass119_0_o *v11; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Int32_array *servantCardIdsIndexArray; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_40F84DA & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, command);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BattleBuffData_BuffData___c__DisplayClass119_0__isEnableCommandCardBuff_b__0__, v9);
    sub_B16FFC(&BattleBuffData_BuffData___c__DisplayClass119_0_TypeInfo, v10);
    byte_40F84DA = 1;
  }
  v11 = (BattleBuffData_BuffData___c__DisplayClass119_0_o *)sub_B170CC(
                                                              BattleBuffData_BuffData___c__DisplayClass119_0_TypeInfo,
                                                              command,
                                                              method,
                                                              v3,
                                                              v4);
  BattleBuffData_BuffData___c__DisplayClass119_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.command = command;
  sub_B16F98(&v11->fields, command);
  if ( !BattleBuffData_BuffData__isCommandCardBuff(this, v12) )
    return 0;
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  v18 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v13, v14, v15, v16);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_BattleBuffData_BuffData___c__DisplayClass119_0__isEnableCommandCardBuff_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__25910576(
           servantCardIdsIndexArray,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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
  __int64 v2; // x2
  struct System_Int32_array *targetSkill; // x8
  __int64 v4; // x9

  targetSkill = this->fields.targetSkill;
  if ( !targetSkill )
    return 0;
  v4 = *(_QWORD *)&targetSkill->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
    this->fields.state |= dword_3134060[v3];
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


void __fastcall BattleBuffData_BuffData___c__DisplayClass119_0___ctor(
        BattleBuffData_BuffData___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData_BuffData___c__DisplayClass119_0___isEnableCommandCardBuff_b__0(
        BattleBuffData_BuffData___c__DisplayClass119_0_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCommandData_o *command; // x8

  command = this->fields.command;
  if ( !command )
    sub_B170D4();
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
  sub_B16F98(&this->fields._buffIf_k__BackingField, buffIf);
}


void __fastcall BattleBuffData_CheckIndividualitiesData___ctor_22056984(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        System_Int32_array *selfConcatSvtIndividualities,
        System_Int32_array *opponentConcatSvtIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(this, self, opponent, 0LL, 0LL, v13);
  if ( selfConcatSvtIndividualities )
  {
    this->fields._selfConcatSvtIndividualities_k__BackingField = selfConcatSvtIndividualities;
    sub_B16F98(&this->fields._selfConcatSvtIndividualities_k__BackingField, selfConcatSvtIndividualities);
  }
  else
  {
    BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(this, self, 0LL, v14);
  }
  if ( opponentConcatSvtIndividualities )
  {
    this->fields._opponentConcatSvtIndividualities_k__BackingField = opponentConcatSvtIndividualities;
    sub_B16F98(&this->fields._opponentConcatSvtIndividualities_k__BackingField, opponentConcatSvtIndividualities);
  }
  else
  {
    BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(this, opponent, 0LL, v15);
  }
  this->fields._buffIf_k__BackingField = buffIf;
  sub_B16F98(&this->fields._buffIf_k__BackingField, buffIf);
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
  __int64 v12; // x2
  struct System_Int32_array *v13; // x0
  struct System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  __int64 v15; // x2
  struct System_Int32_array *v16; // x0
  __int64 v17; // x2
  struct System_Int32_array *v18; // x0
  __int64 v19; // x2
  struct System_Int32_array *v20; // x0
  __int64 v21; // x2
  struct System_Int32_array *v22; // x0
  __int64 v23; // x2
  BattleServantData_o *v24; // x0
  BattleCommandData_o *v25; // x1
  struct System_Int32_array *v26; // x0

  if ( (byte_40F84DF & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, self);
    sub_B16FFC(&int___TypeInfo, v11);
    byte_40F84DF = 1;
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
      ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v12);
    if ( this )
    {
      this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
      sub_B16F98(&this->fields, ConcatServantAndBuffIndividualityies);
      if ( opponent )
        v18 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, 0LL, 0, 0, 0, 0LL);
      else
        v18 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v17);
      this->fields._opponentIndividuality_k__BackingField = v18;
      sub_B16F98(&this->fields._opponentIndividuality_k__BackingField, v18);
      if ( self )
        v22 = BattleServantData__getConcatServantAndBuffIndividualityies(self, 0LL, 0, 1, 0, 0LL);
      else
        v22 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v21);
      this->fields._selfIndividualityCanRelease_k__BackingField = v22;
      sub_B16F98(&this->fields._selfIndividualityCanRelease_k__BackingField, v22);
      if ( opponent )
      {
        v24 = opponent;
        v25 = 0LL;
        goto LABEL_31;
      }
LABEL_32:
      v26 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v23);
      goto LABEL_33;
    }
LABEL_34:
    sub_B170D4();
  }
  if ( self )
    v13 = BattleServantData__getConcatServantAndBuffIndividualityies(self, commandSelf, 0, 0, 0, 0LL);
  else
    v13 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v12);
  if ( !this )
    goto LABEL_34;
  this->fields._selfIndividuality_k__BackingField = v13;
  sub_B16F98(&this->fields, v13);
  if ( opponent )
    v16 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, commandOpponent, 0, 0, 0, 0LL);
  else
    v16 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v15);
  this->fields._opponentIndividuality_k__BackingField = v16;
  sub_B16F98(&this->fields._opponentIndividuality_k__BackingField, v16);
  if ( self )
    v20 = BattleServantData__getConcatServantAndBuffIndividualityies(self, commandSelf, 0, 1, 0, 0LL);
  else
    v20 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v19);
  this->fields._selfIndividualityCanRelease_k__BackingField = v20;
  sub_B16F98(&this->fields._selfIndividualityCanRelease_k__BackingField, v20);
  if ( !opponent )
    goto LABEL_32;
  v24 = opponent;
  v25 = commandOpponent;
LABEL_31:
  v26 = BattleServantData__getConcatServantAndBuffIndividualityies(v24, v25, 0, 1, 0, 0LL);
LABEL_33:
  this->fields._opponentIndividualityCanRemove_k__BackingField = v26;
  sub_B16F98(&this->fields._opponentIndividualityCanRemove_k__BackingField, v26);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  System_Int32_array *ConcatSvtIndividualities; // x0
  struct System_Int32_array *v8; // x1

  if ( (byte_40F84E1 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, opponent);
    byte_40F84E1 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
  {
    if ( opponent )
    {
      ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(opponent, commandOpponent, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    v8 = 0LL;
    if ( this )
      goto LABEL_12;
LABEL_14:
    sub_B170D4();
  }
  if ( !opponent )
    goto LABEL_13;
  ConcatSvtIndividualities = BattleServantData__getIndividualities(opponent, commandOpponent, 0LL);
LABEL_11:
  v8 = ConcatSvtIndividualities;
  if ( !this )
    goto LABEL_14;
LABEL_12:
  this->fields._opponentConcatSvtIndividualities_k__BackingField = v8;
  sub_B16F98(&this->fields._opponentConcatSvtIndividualities_k__BackingField, v8);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleCommandData_o *commandSelf,
        const MethodInfo *method)
{
  System_Int32_array *ConcatSvtIndividualities; // x0
  struct System_Int32_array *v8; // x1

  if ( (byte_40F84E0 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, self);
    byte_40F84E0 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
  {
    if ( self )
    {
      ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(self, commandSelf, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    v8 = 0LL;
    if ( this )
      goto LABEL_12;
LABEL_14:
    sub_B170D4();
  }
  if ( !self )
    goto LABEL_13;
  ConcatSvtIndividualities = BattleServantData__getIndividualities(self, commandSelf, 0LL);
LABEL_11:
  v8 = ConcatSvtIndividualities;
  if ( !this )
    goto LABEL_14;
LABEL_12:
  this->fields._selfConcatSvtIndividualities_k__BackingField = v8;
  sub_B16F98(&this->fields._selfConcatSvtIndividualities_k__BackingField, v8);
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
  this->fields._buffIf_k__BackingField = value;
  sub_B16F98(&this->fields._buffIf_k__BackingField, value);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._opponentConcatSvtIndividualities_k__BackingField = value;
  sub_B16F98(&this->fields._opponentConcatSvtIndividualities_k__BackingField, value);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._opponentIndividuality_k__BackingField = value;
  sub_B16F98(&this->fields._opponentIndividuality_k__BackingField, value);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentIndividualityCanRemove(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._opponentIndividualityCanRemove_k__BackingField = value;
  sub_B16F98(&this->fields._opponentIndividualityCanRemove_k__BackingField, value);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._selfConcatSvtIndividualities_k__BackingField = value;
  sub_B16F98(&this->fields._selfConcatSvtIndividualities_k__BackingField, value);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._selfIndividuality_k__BackingField = value;
  sub_B16F98(&this->fields, value);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfIndividualityCanRelease(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._selfIndividualityCanRelease_k__BackingField = value;
  sub_B16F98(&this->fields._selfIndividualityCanRelease_k__BackingField, value);
}


void __fastcall BattleBuffData_CheckInvokeBuff___ctor(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        BuffList_ACTION_array *actions,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SelfSvt_k__BackingField = selfSvt;
  sub_B16F98(&this->fields, selfSvt);
  this->fields._TargetSvt_k__BackingField = targetSvt;
  sub_B16F98(&this->fields._TargetSvt_k__BackingField, targetSvt);
  this->fields.checkActs = actions;
  sub_B16F98(&this->fields.checkActs, actions);
}


bool __fastcall BattleBuffData_CheckInvokeBuff__IsInvoke(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleBuffData_BuffData_o *buff,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *v13; // x21
  BattleServantData_o *SelfSvt_k__BackingField; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  BattleBuffData_CheckIndividualitiesData_o *v20; // x24
  const MethodInfo *v21; // x6
  struct BuffList_ACTION_array *checkActs; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v27; // x20

  if ( (byte_40F84E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BuffList_ACTION___, buff);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v8);
    sub_B16FFC(&Method_System_Func_BuffList_ACTION__bool___ctor__, v9);
    sub_B16FFC(&System_Func_BuffList_ACTION__bool__TypeInfo, v10);
    sub_B16FFC(&Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__, v11);
    sub_B16FFC(&BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo, v12);
    byte_40F84E2 = 1;
  }
  v13 = (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)sub_B170CC(
                                                                    BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo,
                                                                    buff,
                                                                    command,
                                                                    method,
                                                                    v4);
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.buff = buff;
  sub_B16F98(&v13->fields, buff);
  v13->fields.__4__this = this;
  sub_B16F98(&v13->fields.__4__this, this);
  SelfSvt_k__BackingField = this->fields._SelfSvt_k__BackingField;
  TargetSvt_k__BackingField = this->fields._TargetSvt_k__BackingField;
  v20 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18,
                                                       v19);
  BattleBuffData_CheckIndividualitiesData___ctor(
    v20,
    SelfSvt_k__BackingField,
    TargetSvt_k__BackingField,
    command,
    0LL,
    0LL,
    v21);
  v13->fields.checkIndividualities = v20;
  sub_B16F98(&v13->fields.checkIndividualities, v20);
  checkActs = this->fields.checkActs;
  v27 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B170CC(
                                                                                   System_Func_BuffList_ACTION__bool__TypeInfo,
                                                                                   v23,
                                                                                   v24,
                                                                                   v25,
                                                                                   v26);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__,
    (const MethodInfo_2B67340 *)Method_System_Func_BuffList_ACTION__bool___ctor__);
  return BasicHelper__Any_ListViewSort_FilterCategoryKind_(
           (ListViewSort_FilterCategoryKind_array *)checkActs,
           (System_Func_T__bool__o *)v27,
           (const MethodInfo_18B5E80 *)Method_BasicHelper_Any_BuffList_ACTION___);
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
  this->fields._SelfSvt_k__BackingField = value;
  sub_B16F98(&this->fields, value);
}


void __fastcall BattleBuffData_CheckInvokeBuff__set_TargetSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  this->fields._TargetSvt_k__BackingField = value;
  sub_B16F98(&this->fields._TargetSvt_k__BackingField, value);
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
  struct BattleBuffData_CheckInvokeBuff_o *_4__this; // x8
  struct BattleServantData_o *SelfSvt_k__BackingField; // x9
  BattleBuffData_BuffData_o *buff; // x21
  BattleBuffData_o *buffData; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  BuffList_ActInfo_o *ActInfo; // x0

  if ( (byte_40F78BF & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_40F78BF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  SelfSvt_k__BackingField = _4__this->fields._SelfSvt_k__BackingField;
  if ( !SelfSvt_k__BackingField )
    goto LABEL_10;
  buff = this->fields.buff;
  buffData = SelfSvt_k__BackingField->fields.buffData;
  TargetSvt_k__BackingField = _4__this->fields._TargetSvt_k__BackingField;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, TargetSvt_k__BackingField, 0LL);
  if ( !buff )
LABEL_10:
    sub_B170D4();
  return BattleBuffData_BuffData__CheckCond(buff, buffData, ActInfo, this->fields.checkIndividualities, 1, 0LL);
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


void __fastcall BattleBuffData_FieldChangeData___ctor_22057672(
        BattleBuffData_FieldChangeData_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_String_o *BgmFileName; // x0
  struct System_Int32_array *ParamArray; // x0

  if ( (byte_40F84E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, baseVals);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F84E3 = 1;
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
  Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  BgmFileName = BgmMaster__GetBgmFileName(
                  Master_WarQuestSelectionMaster,
                  this->fields.bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  this->fields.bgmName = BgmFileName;
  sub_B16F98(&this->fields.bgmName, BgmFileName);
  this->fields.isAllowSubBgmPlaying = DataVals__isParam(baseVals, 100, 0LL);
  ParamArray = DataVals__GetParamArray(baseVals, 103, 0LL);
  this->fields.individuality = ParamArray;
  sub_B16F98(&this->fields.individuality, ParamArray);
  this->fields.isTakeOverNextWave = DataVals__GetParam(baseVals, 108, 0, 0LL) > 0;
}


void __fastcall BattleBuffData_IntervalData___ctor(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_IntervalData___ctor_22058112(
        BattleBuffData_IntervalData_o *this,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVal )
    sub_B170D4();
  this->fields.baseTurn = DataVals__GetParam(baseVal, 131, 0, 0LL);
  this->fields.baseCount = DataVals__GetParam(baseVal, 132, 0, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementCount(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalCount = UnityEngine_Mathf__Max_40727628(0, this->fields.intervalCount - 1, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementTurn(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalTurn = UnityEngine_Mathf__Max_40727628(0, this->fields.intervalTurn - 1, 0LL);
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

  if ( !this->fields.updateTiming )
    return 0;
  intervalCount = this->fields.intervalCount;
  if ( this->fields.intervalTurn > 0 || intervalCount >= 1 )
  {
    this->fields.intervalCount = UnityEngine_Mathf__Max_40727628(0, intervalCount - 1, 0LL);
    if ( !buff )
      sub_B170D4();
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
    sub_B170D4();
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


void __fastcall BattleBuffData_ShowBuffData___ctor_22048876(
        BattleBuffData_ShowBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t removeBuffId; // w8
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  unsigned int state; // w8
  bool v8; // w8
  struct BattleBuffData_IntervalData_o *v9; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !buff )
    sub_B170D4();
  this->fields.buffId = buff->fields.buffId;
  if ( buff->fields._isRemove )
  {
    removeBuffId = buff->fields._removeBuffId;
    this->fields.isRemove = 1;
    this->fields.buffId = removeBuffId;
  }
  this->fields.isPassive = buff->fields.passive;
  intervalData = buff->fields.intervalData;
  v8 = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
    && (state = buff->fields.state, (state & 0x24011) == 0)
    && ((state >> 21) & 1) == 0;
  this->fields.isReady = v8;
  this->fields.isBoost = (buff->fields.state & 2) != 0;
  this->fields.turn = buff->fields.turn;
  this->fields.count = buff->fields.count;
  this->fields.isFrame = (buff->fields.state & 0x40) != 0;
  this->fields.isHideParam = (buff->fields.state & 0x80) != 0;
  this->fields.addOrder = buff->fields.addOrder;
  v9 = buff->fields.intervalData;
  this->fields._IntervalData_k__BackingField = v9;
  sub_B16F98(&this->fields._IntervalData_k__BackingField, v9);
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
  this->fields._IntervalData_k__BackingField = value;
  sub_B16F98(&this->fields._IntervalData_k__BackingField, value);
}


void __fastcall BattleBuffData_SkillRankChangeData___ctor(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *v4; // x20

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.buffData = buffData;
  v4 = (BattleBuffData_SkillRankChangeData_o *)((char *)v4 + 16);
  sub_B16F98(v4, buffData);
  LODWORD(v4->monitor) = 0;
  BYTE4(v4->monitor) = 0;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21
  const MethodInfo *v13; // x6
  BattleBuffData_BuffData_array *BuffList_31040328; // x19
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  BattleBuffData_SkillRankChangeData___c_c *v20; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__11_0; // x20
  Il2CppObject *v23; // x21
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v24; // x0

  if ( (byte_40F84E5 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v6);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v7);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v8);
    sub_B16FFC(&Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__, v9);
    sub_B16FFC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v10);
    byte_40F84E5 = 1;
  }
  buffData = this->fields.buffData;
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, 0LL, 0LL, 0LL, 0LL, 0LL, v13);
  if ( !buffData )
    sub_B170D4();
  BuffList_31040328 = BattleBuffData__getBuffList_31040328(buffData, 92, v12, 0, 0, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, BuffList_31040328, 1, v15);
  v20 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v20 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                 v16,
                                                                                 v17,
                                                                                 v18,
                                                                                 v19);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__11_0,
      v23,
      Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v24 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v24->__9__11_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__11_0;
    sub_B16F98(&v24->__9__11_0, _9__11_0);
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BuffList_31040328,
           (System_Func_TSource__int__o *)_9__11_0,
           (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData_SkillRankChangeData__RevertUnusedBuff(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        bool isUnused,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x21
  BattleBuffData_o *buffData; // x0

  if ( (byte_40F84E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, buffArray);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v9);
    sub_B16FFC(&Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__, v10);
    sub_B16FFC(&BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo, v11);
    byte_40F84E6 = 1;
  }
  v12 = (BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *)sub_B170CC(
                                                                        BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo,
                                                                        buffArray,
                                                                        isUnused,
                                                                        method,
                                                                        v4);
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  v12->fields.isUnused = isUnused;
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v13,
                                                                               v14,
                                                                               v15,
                                                                               v16);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v17,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  if ( v12->fields.isUnused )
  {
    buffData = this->fields.buffData;
    if ( buffData )
    {
      BattleBuffData__ResetTargetUseBuff(buffData, 154, 0, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall BattleBuffData_SkillRankChangeData__Update(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21
  const MethodInfo *v13; // x6
  BattleBuffData_BuffData_array *FixBuffArray; // x20
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  BattleBuffData_SkillRankChangeData___c_c *v20; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v23; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v24; // x0

  if ( (byte_40F84E4 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v6);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v7);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v8);
    sub_B16FFC(&Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__, v9);
    sub_B16FFC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v10);
    byte_40F84E4 = 1;
  }
  buffData = this->fields.buffData;
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, 0LL, 0LL, 0LL, 0LL, 0LL, v13);
  if ( !buffData )
    sub_B170D4();
  FixBuffArray = BattleBuffData__GetFixBuffArray(buffData, 92, v12, 0, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, FixBuffArray, 1, v15);
  v20 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v20 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                 v16,
                                                                                 v17,
                                                                                 v18,
                                                                                 v19);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__10_0,
      v23,
      Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v24 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v24->__9__10_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__10_0;
    sub_B16F98(&v24->__9__10_0, _9__10_0);
  }
  this->fields._RankUpCount_k__BackingField = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)FixBuffArray,
                                                (System_Func_TSource__int__o *)_9__10_0,
                                                (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21
  const MethodInfo *v13; // x6
  BattleBuffData_BuffData_array *FixBuffArray; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleBuffData_BuffData_array *v19; // x20
  BattleBuffData_SkillRankChangeData___c_c *v20; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13_0; // x21
  Il2CppObject *v23; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v24; // x0
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v26; // x3
  BattleBuffData_BuffData_array *v27; // x1
  BattleBuffData_o *v28; // x0

  if ( (byte_40F84E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_BattleBuffData_BuffData___, method);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__, v9);
    sub_B16FFC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v10);
    byte_40F84E7 = 1;
  }
  buffData = this->fields.buffData;
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, 0LL, 0LL, 0LL, 0LL, 0LL, v13);
  if ( !buffData )
    goto LABEL_20;
  FixBuffArray = BattleBuffData__GetFixBuffArray(buffData, 92, v12, 0, 0LL);
  if ( !FixBuffArray )
    goto LABEL_20;
  v19 = FixBuffArray;
  if ( *(_QWORD *)&FixBuffArray->max_length )
  {
    v20 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
      v20 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                            v15,
                                                                            v16,
                                                                            v17,
                                                                            v18);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__13_0,
        v23,
        Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v24 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      v24->__9__13_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__13_0;
      sub_B16F98(&v24->__9__13_0, _9__13_0);
    }
    All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                    v19,
                                    (System_Predicate_T__o *)_9__13_0,
                                    (const MethodInfo_2044520 *)Method_System_Array_FindAll_BattleBuffData_BuffData___);
    if ( !All_BattleBuffData_BuffData )
      goto LABEL_18;
    v27 = All_BattleBuffData_BuffData;
    if ( !*(_QWORD *)&All_BattleBuffData_BuffData->max_length )
      goto LABEL_18;
    v28 = this->fields.buffData;
    if ( v28 )
    {
      BattleBuffData__UsedProgressing(v28, v27, 0LL);
LABEL_18:
      BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, v19, 0, v26);
      return;
    }
LABEL_20:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x0

  if ( (byte_40F78C0 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v1);
    byte_40F78C0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleBuffData_SkillRankChangeData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleBuffData_SkillRankChangeData___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
  return buff->fields.param;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData___c___Update_b__10_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return buff->fields.param;
}


bool __fastcall BattleBuffData_SkillRankChangeData___c___UseBuff_b__13_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
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
    sub_B170D4();
  BattleBuffData_BuffData__RevertUnused(buff, this->fields.isUnused, 0LL);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__236___ctor(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffEnumerable_d__236__MoveNext(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct BattleBuffData_o *_4__this; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *activeList; // x0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap1; // x20
  __int128 v9; // q0
  const MethodInfo *v10; // x1
  struct BattleBuffData_BuffData_o *current; // x1
  bool result; // w0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *passiveList; // x0
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  struct BattleBuffData_BuffData_o *v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_40F84CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v4);
    byte_40F84CF = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap1 = &this->fields.__7__wrap1;
  }
  else
  {
    _4__this = this->fields.__4__this;
    if ( _1__state == 1 )
    {
      p__7__wrap1 = &this->fields.__7__wrap1;
    }
    else
    {
      if ( _1__state )
        return 0;
      this->fields.__1__state = -1;
      if ( !_4__this )
        sub_B170D4();
      activeList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.activeList;
      if ( !activeList )
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v17,
        activeList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      p__7__wrap1 = &this->fields.__7__wrap1;
      v9 = *(_OWORD *)&v17.fields.list;
      this->fields.__7__wrap1.fields.current = (struct BattleBuffData_BuffData_o *)v17.fields.current;
      *(_OWORD *)&this->fields.__7__wrap1.fields.list = v9;
      sub_B16F98(&this->fields.__7__wrap1, 0LL);
    }
    this->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
           (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      current = this->fields.__7__wrap1.fields.current;
      this->fields.__2__current = current;
      sub_B16F98(&this->fields.__2__current, current);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    BattleBuffData__AllBuffEnumerable_d__236____m__Finally1(this, v10);
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
    if ( !_4__this )
      sub_B170D4();
    passiveList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.passiveList;
    if ( !passiveList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      passiveList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v14 = *(_OWORD *)&v17.fields.list;
    p__7__wrap1->fields.current = (struct BattleBuffData_BuffData_o *)v17.fields.current;
    *(_OWORD *)&p__7__wrap1->fields.list = v14;
    sub_B16F98(p__7__wrap1, 0LL);
  }
  this->fields.__1__state = -4;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    v16 = this->fields.__7__wrap1.fields.current;
    this->fields.__2__current = v16;
    sub_B16F98(&this->fields.__2__current, v16);
    this->fields.__1__state = 2;
    return 1;
  }
  else
  {
    BattleBuffData__AllBuffEnumerable_d__236____m__Finally2(this, v15);
    result = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable_d__236__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t l__initialThreadId; // w20
  __int64 v7; // x20
  struct BattleBuffData_o *_4__this; // x1

  if ( (byte_40F84D2 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData__AllBuffEnumerable_d__236_TypeInfo, method);
    byte_40F84D2 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v7 = sub_B170CC(BattleBuffData__AllBuffEnumerable_d__236_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v7 )
      sub_B170D4();
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v7 + 40) = _4__this;
    sub_B16F98(v7 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v7;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffEnumerable_d__236__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffEnumerable_d__236__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleBuffData__AllBuffEnumerable_d__236_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleBuffData__AllBuffEnumerable_d__236__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__236__System_IDisposable_Dispose(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
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
      BattleBuffData__AllBuffEnumerable_d__236____m__Finally2(this, method);
      if ( v4 )
      {
        if ( v3[v2] == 65 )
          v4 = v2;
      }
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleBuffData__AllBuffEnumerable_d__236____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__236____m__Finally1(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F84D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_40F84D0 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__236____m__Finally2(
        BattleBuffData__AllBuffEnumerable_d__236_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F84D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_40F84D1 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__237___ctor(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__237__MoveNext(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  BattleBuffData_o *_4__this; // x21
  struct BattleBuffData_BuffData_array *ActiveList; // x0
  struct BattleBuffData_BuffData_array **p__7__wrap1; // x20
  int32_t v8; // w8
  int32_t v9; // w8
  struct BattleBuffData_BuffData_array *v10; // x9
  int32_t max_length; // w10
  struct BattleBuffData_BuffData_o *v12; // x1
  struct BattleBuffData_BuffData_o **p__2__current; // x19
  bool result; // w0
  int32_t _7__wrap2; // w8
  int32_t v16; // w8
  struct BattleBuffData_BuffData_array *PassiveList; // x0
  struct BattleBuffData_BuffData_array *v18; // x9
  int32_t v19; // w10
  struct BattleBuffData_BuffData_o *v20; // x1
  struct BattleBuffData_BuffData_o **v21; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    p__7__wrap1 = &this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v16 = _7__wrap2 + 1;
    this->fields.__7__wrap2 = v16;
    goto LABEL_14;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    v9 = this->fields.__7__wrap2;
    p__7__wrap1 = &this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v8 = v9 + 1;
    this->fields.__7__wrap2 = v8;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_20:
      sub_B170D4();
    ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = &this->fields.__7__wrap1;
    this->fields.__7__wrap1 = ActiveList;
    sub_B16F98(&this->fields.__7__wrap1, ActiveList);
    v8 = 0;
    this->fields.__7__wrap2 = 0;
  }
  v10 = *p__7__wrap1;
  if ( !*p__7__wrap1 )
    goto LABEL_20;
  max_length = v10->max_length;
  if ( v8 < max_length )
  {
    if ( v8 < (unsigned int)max_length )
    {
      v12 = v10->m_Items[v8];
      this->fields.__2__current = v12;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  *p__7__wrap1 = 0LL;
  sub_B16F98(p__7__wrap1, 0LL);
  if ( !_4__this )
    goto LABEL_20;
  PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = PassiveList;
  sub_B16F98(p__7__wrap1, PassiveList);
  v16 = 0;
  this->fields.__7__wrap2 = 0;
LABEL_14:
  v18 = *p__7__wrap1;
  if ( !*p__7__wrap1 )
    goto LABEL_20;
  v19 = v18->max_length;
  if ( v16 >= v19 )
  {
    *p__7__wrap1 = 0LL;
    sub_B16F98(p__7__wrap1, 0LL);
    return 0;
  }
  if ( v16 >= (unsigned int)v19 )
    goto LABEL_21;
  v20 = v18->m_Items[v16];
  this->fields.__2__current = v20;
  v21 = &this->fields.__2__current;
  sub_B16F98(v21, v20);
  *((_DWORD *)v21 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__237__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *v7; // x20
  struct BattleBuffData_o *_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_40F84D4 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_TypeInfo, method);
    byte_40F84D4 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    v7 = (BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *)sub_B170CC(
                                                                         BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    v7->fields.__1__state = 0;
    v7->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v7 )
      sub_B170D4();
    _4__this = this->fields.__4__this;
    v7->fields.__4__this = _4__this;
    sub_B16F98(&v7->fields.__4__this, _4__this);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v7;
  v7->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__237__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerablePriorActive_d__237__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__237__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__237__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__237_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__238___ctor(
        BattleBuffData__AllBuffValidEnumerable_d__238_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerable_d__238__MoveNext(
        BattleBuffData__AllBuffValidEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  BattleBuffData_o *_4__this; // x21
  struct BattleBuffData_BuffData_array *PassiveList; // x0
  struct BattleBuffData_BuffData_array **p__7__wrap1; // x20
  int32_t v8; // w8
  int32_t v9; // w8
  struct BattleBuffData_BuffData_array *v10; // x9
  int32_t max_length; // w10
  struct BattleBuffData_BuffData_o *v12; // x1
  struct BattleBuffData_BuffData_o **p__2__current; // x19
  bool result; // w0
  int32_t _7__wrap2; // w8
  int32_t v16; // w8
  struct BattleBuffData_BuffData_array *ActiveList; // x0
  struct BattleBuffData_BuffData_array *v18; // x9
  int32_t v19; // w10
  struct BattleBuffData_BuffData_o *v20; // x1
  struct BattleBuffData_BuffData_o **v21; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    p__7__wrap1 = &this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v16 = _7__wrap2 + 1;
    this->fields.__7__wrap2 = v16;
    goto LABEL_14;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    v9 = this->fields.__7__wrap2;
    p__7__wrap1 = &this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v8 = v9 + 1;
    this->fields.__7__wrap2 = v8;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_20:
      sub_B170D4();
    PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = &this->fields.__7__wrap1;
    this->fields.__7__wrap1 = PassiveList;
    sub_B16F98(&this->fields.__7__wrap1, PassiveList);
    v8 = 0;
    this->fields.__7__wrap2 = 0;
  }
  v10 = *p__7__wrap1;
  if ( !*p__7__wrap1 )
    goto LABEL_20;
  max_length = v10->max_length;
  if ( v8 < max_length )
  {
    if ( v8 < (unsigned int)max_length )
    {
      v12 = v10->m_Items[v8];
      this->fields.__2__current = v12;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  *p__7__wrap1 = 0LL;
  sub_B16F98(p__7__wrap1, 0LL);
  if ( !_4__this )
    goto LABEL_20;
  ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = ActiveList;
  sub_B16F98(p__7__wrap1, ActiveList);
  v16 = 0;
  this->fields.__7__wrap2 = 0;
LABEL_14:
  v18 = *p__7__wrap1;
  if ( !*p__7__wrap1 )
    goto LABEL_20;
  v19 = v18->max_length;
  if ( v16 >= v19 )
  {
    *p__7__wrap1 = 0LL;
    sub_B16F98(p__7__wrap1, 0LL);
    return 0;
  }
  if ( v16 >= (unsigned int)v19 )
    goto LABEL_21;
  v20 = v18->m_Items[v16];
  this->fields.__2__current = v20;
  v21 = &this->fields.__2__current;
  sub_B16F98(v21, v20);
  *((_DWORD *)v21 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__238__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerable_d__238_o *v7; // x20
  struct BattleBuffData_o *_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_40F84D3 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData__AllBuffValidEnumerable_d__238_TypeInfo, method);
    byte_40F84D3 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    v7 = (BattleBuffData__AllBuffValidEnumerable_d__238_o *)sub_B170CC(
                                                              BattleBuffData__AllBuffValidEnumerable_d__238_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    v7->fields.__1__state = 0;
    v7->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v7 )
      sub_B170D4();
    _4__this = this->fields.__4__this;
    v7->fields.__4__this = _4__this;
    sub_B16F98(&v7->fields.__4__this, _4__this);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v7;
  v7->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__238__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerable_d__238__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleBuffData__AllBuffValidEnumerable_d__238_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerable_d__238__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__238__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleBuffData___c_StaticFields *static_fields; // x0

  if ( (byte_40F84C7 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData___c_TypeInfo, v1);
    byte_40F84C7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleBuffData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleBuffData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleBuffData___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleBuffData___c___ctor(BattleBuffData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__209_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__209_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__209_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__209_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__67_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__67_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__66_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__66_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.turn == 0;
}


void __fastcall BattleBuffData___c___DirectUpdateWaitIntervalBuff_b__27_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B170D4();
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__Update(intervalData, buff, method);
}


bool __fastcall BattleBuffData___c___GetAllCommandAssistBuff_b__199_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllCommandCodeBuff_b__198_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return buff->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__226_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__226_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff)
      || buff->fields.userCommandCodeId > 0
      || buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllIntervalBuffArray_b__240_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.intervalData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAvaliableActiveBuffArray_b__101_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  bool result; // w0
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8

  if ( !s )
    sub_B170D4();
  result = !s->fields._isRemove
        && ((intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetClassIconEffectBuffList_b__250_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !b )
    sub_B170D4();
  intervalData = b->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = b->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetCurrentWarBoardNotAttackedBuff_b__231_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return !buff->fields._isRemove && BattleBuffData_BuffData__IsWarBoardNotAttacked(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__216_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__216_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


int32_t __fastcall BattleBuffData___c___GetEffectBuffList_b__216_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__216_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_B170D4();
  intervalData = buff->fields.intervalData;
  if ( !intervalData )
    return 0;
  if ( intervalData->fields.intervalTurn <= 0 )
    return intervalData->fields.intervalCount > 0;
  return 1;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__114_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__114_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__68_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__68_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__85_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B170D4();
  return _->fields.count == 0;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__85_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B170D4();
  return _->fields.count == 0;
}


void __fastcall BattleBuffData___c___ResetNotTakeOverBuff_b__69_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  if ( !buff->fields.isTakeOverNextBattle )
    buff->fields.turn = 0;
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__211_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__211_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__210_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__210_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__210_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateForceBuff_b__89_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleBuffData___c___UpdateForceNoField_b__222_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  if ( buff->fields.onfiledUniqueId >= 1 )
    buff->fields.state |= 1u;
  if ( buff->fields.onFieldAliveCond )
    buff->fields.state |= 0x4000u;
}


int32_t __fastcall BattleBuffData___c___checkBuffSuccessful_b__117_0(
        BattleBuffData___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


bool __fastcall BattleBuffData___c___checkFieldAlive_b__93_0(
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
    sub_B170D4();
  intervalData = s->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___getBuffActiveIDList_b__103_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___getBuffIDList_b__102_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__72_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B170D4();
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__72_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B170D4();
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass101_0___ctor(
        BattleBuffData___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass101_0___GetAvaliableActiveBuffArray_b__1(
        BattleBuffData___c__DisplayClass101_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  System_Predicate_BattleBuffData_BuffData__o *conditionsToAdd; // x0

  if ( (byte_40F84C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData__Invoke__, s);
    byte_40F84C8 = 1;
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
  conditionsToAdd = this->fields.conditionsToAdd;
  if ( !conditionsToAdd )
LABEL_12:
    sub_B170D4();
  return System_Predicate_BattleBuffData_BuffData___Invoke(
           conditionsToAdd,
           s,
           (const MethodInfo_2B0B218 *)Method_System_Predicate_BattleBuffData_BuffData__Invoke__);
}


void __fastcall BattleBuffData___c__DisplayClass106_0___ctor(
        BattleBuffData___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass106_0___SubBuffFromType_b__0(
        BattleBuffData___c__DisplayClass106_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  BuffMaster_o *buffMst; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (buffMst = BattleBuffData__get_buffMst(_4__this, 0LL), !buff) || !buffMst )
    sub_B170D4();
  return BuffMaster__GetBuffType(buffMst, buff->fields.buffId, -1, 0LL) == this->fields.checkBuffType;
}


void __fastcall BattleBuffData___c__DisplayClass107_0___ctor(
        BattleBuffData___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass107_0___SubBuffFromDeadActorId_b__0(
        BattleBuffData___c__DisplayClass107_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t actorId; // w8
  int32_t v4; // w9

  actorId = this->fields.actorId;
  if ( actorId < 1 )
    return 0;
  if ( !buff )
    sub_B170D4();
  if ( buff->fields.isRemoveFieldBuffActorDeath )
    v4 = buff->fields.actorId;
  else
    v4 = -1;
  return v4 == actorId;
}


void __fastcall BattleBuffData___c__DisplayClass114_0___ctor(
        BattleBuffData___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass114_0___GetGrantBuffTypeArray_b__0(
        BattleBuffData___c__DisplayClass114_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  System_Collections_Generic_List_int__o *buffTypeList; // x20
  BuffMaster_o *buffMst; // x0
  int32_t BuffType; // w0

  if ( (byte_40F84C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, buff);
    byte_40F84C9 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (buffTypeList = this->fields.buffTypeList, buffMst = BattleBuffData__get_buffMst(_4__this, 0LL), !buff)
    || !buffMst
    || (BuffType = BuffMaster__GetBuffType(buffMst, buff->fields.buffId, -1, 0LL), !buffTypeList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___Add(
    buffTypeList,
    BuffType,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass135_0___ctor(
        BattleBuffData___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass135_0___getRectBuffList_b__0(
        BattleBuffData___c__DisplayClass135_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *ent; // x8

  ent = this->fields.ent;
  if ( !ent )
    sub_B170D4();
  return ent->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass143_0___ctor(
        BattleBuffData___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass143_0___ChangeBuffState_b__0(
        BattleBuffData___c__DisplayClass143_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  BattleBuffData_o *v6; // x0
  bool isContainConditionIndividuality; // w22
  BattleBuffData_o *v8; // x0
  bool isConditionHp; // w21
  BattleBuffData_o *v10; // x0
  char isConditionIndividuality; // w8
  BattleBuffData_o *v12; // x0
  BattleBuffData_o *v13; // x0
  _BOOL4 isValueChanged; // w21
  bool v15; // w0

  if ( !buff )
    goto LABEL_22;
  if ( (buff->fields.state & 0x20) == 0 )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  if ( BattleBuffData__isContainConditionsHp(_4__this, buff, 0LL) )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_22;
    isContainConditionIndividuality = BattleBuffData__isContainConditionIndividuality(v6, buff, 0LL);
  }
  else
  {
    isContainConditionIndividuality = 0;
  }
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_22;
  isConditionHp = BattleBuffData__isConditionHp(v8, buff, this->fields.now, this->fields.max, 0LL);
  if ( isContainConditionIndividuality )
  {
    if ( isConditionHp )
    {
      v10 = this->fields.__4__this;
      if ( !v10 )
        goto LABEL_22;
      isConditionIndividuality = BattleBuffData__isConditionIndividuality(
                                   v10,
                                   buff,
                                   this->fields.servantIndv,
                                   this->fields.buffIndv,
                                   this->fields.fieldIndiv,
                                   this->fields.canSubStateBuffIndv,
                                   0LL);
    }
    else
    {
      isConditionIndividuality = 0;
    }
  }
  else
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_22;
    isConditionIndividuality = isConditionHp | BattleBuffData__isConditionIndividuality(
                                                 v12,
                                                 buff,
                                                 this->fields.servantIndv,
                                                 this->fields.buffIndv,
                                                 this->fields.fieldIndiv,
                                                 this->fields.canSubStateBuffIndv,
                                                 0LL);
  }
  v13 = this->fields.__4__this;
  if ( !v13 )
LABEL_22:
    sub_B170D4();
  isValueChanged = this->fields.isValueChanged;
  if ( (isConditionIndividuality & 1) != 0 )
    v15 = BattleBuffData__OffStateWithAuraConditionCheck(v13, buff, 16, 0LL);
  else
    v15 = BattleBuffData__OnStateWithAuraConditionCheck(v13, buff, 16, 0LL);
  this->fields.isValueChanged = isValueChanged || v15;
}


void __fastcall BattleBuffData___c__DisplayClass144_0___ctor(
        BattleBuffData___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass144_0___UpdateForceAllBuffNoAct_b__0(
        BattleBuffData___c__DisplayClass144_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  BattleBuffData_BuffData__setShowState(buff, this->fields.showState, method);
  buff->fields.state |= 0x20000u;
}


void __fastcall BattleBuffData___c__DisplayClass185_0___ctor(
        BattleBuffData___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass185_0___CheckBuffType_b__0(
        BattleBuffData___c__DisplayClass185_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_B170D4();
  return buffEnt->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass190_0___ctor(
        BattleBuffData___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass190_0___InitializeShift_b__0(
        BattleBuffData___c__DisplayClass190_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.actorId == this->fields.actorId;
}


bool __fastcall BattleBuffData___c__DisplayClass190_0___InitializeShift_b__1(
        BattleBuffData___c__DisplayClass190_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  return BattleBuffData__checkShiftClear(_4__this, s, this->fields.buffindivs, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass208_0___ctor(
        BattleBuffData___c__DisplayClass208_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass208_0___GetSkillTypeBuff_b__0(
        BattleBuffData___c__DisplayClass208_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *targetSkillList; // x0

  if ( (byte_40F84CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, buff);
    byte_40F84CA = 1;
  }
  if ( !buff || (targetSkillList = this->fields.targetSkillList) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_List_int___Contains(
           targetSkillList,
           buff->fields.grantSkillType,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleBuffData___c__DisplayClass210_0___ctor(
        BattleBuffData___c__DisplayClass210_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass210_0___UpdateBuffAddOrder_b__3(
        BattleBuffData___c__DisplayClass210_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass210_0___UpdateBuffAddOrder_b__4(
        BattleBuffData___c__DisplayClass210_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass235_0___ctor(
        BattleBuffData___c__DisplayClass235_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass235_0___GetFamilyLinkageIdMax_b__0(
        BattleBuffData___c__DisplayClass235_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_40F84CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_40F84CB = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B170D4();
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass235_0___GetFamilyLinkageIdMax_b__1(
        BattleBuffData___c__DisplayClass235_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_40F84CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_40F84CC = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B170D4();
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass241_0___ctor(
        BattleBuffData___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass241_0___ExistsTargetIntervalBuff_b__0(
        BattleBuffData___c__DisplayClass241_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  BuffMaster_o *buffMst; // x0
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (buffMst = BattleBuffData__get_buffMst(_4__this, 0LL), !buff) )
    sub_B170D4();
  return BattleBuffData_BuffData__EqualBuffType(buff, buffMst, this->fields.targetType, v7);
}


void __fastcall BattleBuffData___c__DisplayClass242_0___ctor(
        BattleBuffData___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass242_0___ResetTargetUseBuff_b__0(
        BattleBuffData___c__DisplayClass242_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  BuffMaster_o *buffMst; // x0
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (buffMst = BattleBuffData__get_buffMst(_4__this, 0LL), !x) )
    sub_B170D4();
  return BattleBuffData_BuffData__EqualBuffType(x, buffMst, this->fields.targetType, v7);
}


void __fastcall BattleBuffData___c__DisplayClass251_0___ctor(
        BattleBuffData___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass251_0___RemoveClassBoardSkillBuff_b__0(
        BattleBuffData___c__DisplayClass251_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B170D4();
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass251_0___RemoveClassBoardSkillBuff_b__1(
        BattleBuffData___c__DisplayClass251_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B170D4();
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass251_0___RemoveClassBoardSkillBuff_b__2(
        BattleBuffData___c__DisplayClass251_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B170D4();
  return a->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass251_0___RemoveClassBoardSkillBuff_b__3(
        BattleBuffData___c__DisplayClass251_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B170D4();
  return a->fields.skillId == skillData->fields.id;
}


void __fastcall BattleBuffData___c__DisplayClass251_1___ctor(
        BattleBuffData___c__DisplayClass251_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass251_1___RemoveClassBoardSkillBuff_b__4(
        BattleBuffData___c__DisplayClass251_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B170D4();
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass251_1___RemoveClassBoardSkillBuff_b__5(
        BattleBuffData___c__DisplayClass251_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B170D4();
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass251_1___RemoveClassBoardSkillBuff_b__6(
        BattleBuffData___c__DisplayClass251_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B170D4();
  return a->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass251_1___RemoveClassBoardSkillBuff_b__7(
        BattleBuffData___c__DisplayClass251_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  BattleBuffData_ShowBuffData_o *v8; // x21
  const MethodInfo *v9; // x2
  BattleBuffData_o *_4__this; // x0
  BattleBuffData_o *v11; // x0
  BattleBuffData_o *v12; // x0
  BattleBuffData_o *v13; // x0
  BattleBuffData_o *v14; // x0
  BattleBuffData_o *v15; // x0
  BattleBuffData_o *v16; // x0
  BattleBuffData_o *v17; // x0
  BattleBuffData_o *v18; // x0
  BattleBuffData_o *v19; // x0
  BattleBuffData_o *v20; // x0
  BattleBuffData_o *v21; // x0
  struct System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList; // x0

  if ( (byte_40F84CD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, buff);
    sub_B16FFC(&BattleBuffData_ShowBuffData_TypeInfo, v7);
    byte_40F84CD = 1;
  }
  v8 = (BattleBuffData_ShowBuffData_o *)sub_B170CC(BattleBuffData_ShowBuffData_TypeInfo, buff, method, v3, v4);
  BattleBuffData_ShowBuffData___ctor_22048876(v8, buff, v9);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  if ( BattleBuffData__isHide(_4__this, buff, 0LL) )
    return;
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_35;
  if ( BattleBuffData__isHideOtherCommand(v11, buff, 0LL) )
    return;
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_35;
  if ( BattleBuffData__isShowDeff(v12, buff, 0LL) )
    return;
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_35;
  if ( BattleBuffData__isShowDamageAndCommandCardBuff(v13, buff, 0LL) )
    return;
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_35;
  if ( BattleBuffData__isInvalidHide(v14, buff, 0LL) )
    return;
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_35;
  if ( BattleBuffData__IsUnfix(v15, buff, 0LL) )
    return;
  if ( !buff )
LABEL_35:
    sub_B170D4();
  if ( !buff->fields.passive )
    goto LABEL_30;
  if ( buff->fields.userCommandCodeId <= 0 && buff->fields.commandAssistId <= 0 )
  {
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_35;
    if ( BattleBuffData__isShow(v16, buff, 0LL) )
      goto LABEL_33;
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_35;
    if ( BattleBuffData__checkBuffSpecialAttack(v17, buff, 0LL) )
      goto LABEL_33;
    v18 = this->fields.__4__this;
    if ( !v18 )
      goto LABEL_35;
    if ( BattleBuffData__checkBuffTurnCount(v18, buff, 0LL) )
      goto LABEL_33;
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_35;
    if ( BattleBuffData__checkBoostSkill(v19, buff, 0LL) )
      goto LABEL_33;
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_35;
    if ( BattleBuffData__isShowStatusBuffOnly(v20, buff, 0LL) )
    {
LABEL_33:
      reList = this->fields.reList;
      if ( reList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
        return;
      }
      goto LABEL_35;
    }
    if ( buff->fields.passive )
      return;
LABEL_30:
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_35;
    if ( BattleBuffData__isHide(v21, buff, 0LL) )
      return;
    goto LABEL_33;
  }
}


void __fastcall BattleBuffData___c__DisplayClass44_0___ctor(
        BattleBuffData___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass44_0___DebugGetShowServantParamAll_b__0(
        BattleBuffData___c__DisplayClass44_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleBuffData_ShowBuffData_o *v8; // x21
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList; // x0

  if ( (byte_40F84CE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, buff);
    sub_B16FFC(&BattleBuffData_ShowBuffData_TypeInfo, v7);
    byte_40F84CE = 1;
  }
  v8 = (BattleBuffData_ShowBuffData_o *)sub_B170CC(BattleBuffData_ShowBuffData_TypeInfo, buff, method, v3, v4);
  BattleBuffData_ShowBuffData___ctor_22048876(v8, buff, v9);
  reList = this->fields.reList;
  if ( !reList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass71_0___ctor(
        BattleBuffData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass71_0___RemoveLinkageBuff_b__0(
        BattleBuffData___c__DisplayClass71_0_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t indiv,
        const MethodInfo *method)
{
  int32_t state; // w8
  BattleBuffData_o *_4__this; // x0
  bool v7; // zf
  __int64 v8; // x8

  if ( !buff )
    goto LABEL_8;
  state = buff->fields.state;
  if ( ((this->fields.isFamily ^ ((state & 0x400000u) >> 22)) & 1) != 0 )
    return 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_B170D4();
  v7 = (state & 0x400000) == 0;
  v8 = 296LL;
  if ( v7 )
    v8 = 120LL;
  return BattleBuffData__checkSameElement(_4__this, indiv, *(System_Int32_array **)((char *)&buff->klass + v8), 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass71_0___RemoveLinkageBuff_b__1(
        BattleBuffData___c__DisplayClass71_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return this->fields.isFamily ^ ((x->fields.state & 0x400000) == 0);
}


void __fastcall BattleBuffData___c__DisplayClass91_0___ctor(
        BattleBuffData___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass91_0___CheckBuffGroup_b__0(
        BattleBuffData___c__DisplayClass91_0_o *this,
        int32_t target,
        const MethodInfo *method)
{
  return this->fields.attachTarget == target;
}