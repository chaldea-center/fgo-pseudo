void __fastcall ServantRepeatTask___ctor(
        ServantRepeatTask_o *this,
        ServantReactTaskCreator_o *creator,
        ReactTaskTarget_array *targets,
        int32_t maxPriority,
        const MethodInfo *method)
{
  ServantRepeatTask_o *v8; // x22
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

  v8 = this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  v8->fields.actiontype = 57;
  v8->fields.creator = creator;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v8->fields.creator,
    (System_Int32_array **)creator,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v8->fields.targets = targets;
  v8 = (ServantRepeatTask_o *)((char *)v8 + 216);
  sub_B16F98((BattleServantConfConponent_o *)v8, (System_Int32_array **)targets, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)&v8[-1].fields.IsNotShowSkillMessage = maxPriority;
}


BattleLogicTask_array *__fastcall ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
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
  __int64 v17; // x21
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
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v40; // x23
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v43; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v45; // x23
  ServantRepeatTask_o *v46; // x19
  const MethodInfo *v47; // x4

  if ( (byte_40FBBA3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___, logic);
    sub_B16FFC(&Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__, v7);
    sub_B16FFC(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_B16FFC(&ServantRepeatTask_TypeInfo, v14);
    sub_B16FFC(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__, v15);
    sub_B16FFC(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo, v16);
    byte_40FBBA3 = 1;
  }
  v17 = sub_B170CC(ServantRepeatTask___c__DisplayClass3_0_TypeInfo, logic, method, v3, v4);
  ServantRepeatTask___c__DisplayClass3_0___ctor((ServantRepeatTask___c__DisplayClass3_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_12;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 24) = logic;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)logic, v24, v25, v26, v27, v28, v29);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targets, 0LL) )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                            System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo,
                                                                                            v35,
                                                                                            v36,
                                                                                            v37,
                                                                                            v38);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v40,
      (Il2CppObject *)v17,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__);
    v41 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                           targets,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v40,
                                                           (const MethodInfo_19C1F08 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v34 )
      goto LABEL_12;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
      v41,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v43 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v34 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_12:
    sub_B170D4();
  }
  creator = this->fields.creator;
  v45 = this->fields.targets;
  v46 = (ServantRepeatTask_o *)sub_B170CC(ServantRepeatTask_TypeInfo, v35, v36, v37, v38);
  ServantRepeatTask___ctor(v46, creator, v45, v43, v47);
  if ( !v34 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v34,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall ServantRepeatTask___c__DisplayClass3_0___ctor(
        ServantRepeatTask___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall ServantRepeatTask___c__DisplayClass3_0___MakeActionTask_b__0(
        ServantRepeatTask___c__DisplayClass3_0_o *this,
        ReactTaskTarget_o *x,
        const MethodInfo *method)
{
  struct ServantRepeatTask_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !x )
    sub_B170D4();
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        0LL);
}