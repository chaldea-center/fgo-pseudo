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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v8->fields.creator,
    (System_Int32_array **)creator,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v8->fields.targets = targets;
  v8 = (ServantRepeatTask_o *)((char *)v8 + 232);
  sub_B2C2F8((BattleServantConfConponent_o *)v8, (System_Int32_array **)targets, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)&v8[-1].fields.IsNotShowSkillMessage = maxPriority;
}


BattleLogicTask_array *__fastcall ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
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
  __int64 v15; // x21
  System_Collections_Generic_IEnumerable_TResult__o *IsNullOrEmpty; // x0
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v32; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v34; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v36; // x23
  ServantRepeatTask_o *v37; // x19
  const MethodInfo *v38; // x4

  if ( (byte_4189BE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___, logic);
    sub_B2C35C(&Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__, v5);
    sub_B2C35C(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_B2C35C(&ServantRepeatTask_TypeInfo, v12);
    sub_B2C35C(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__, v13);
    sub_B2C35C(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo, v14);
    byte_4189BE7 = 1;
  }
  v15 = sub_B2C42C(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  ServantRepeatTask___c__DisplayClass3_0___ctor((ServantRepeatTask___c__DisplayClass3_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = logic;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)logic, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v32,
      (Il2CppObject *)v15,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      (const MethodInfo_2713350 *)Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v32,
                      (const MethodInfo_1A98194 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v30 )
      goto LABEL_12;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v34 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v30 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_12:
    sub_B2C434(IsNullOrEmpty, v17);
  }
  creator = this->fields.creator;
  v36 = this->fields.targets;
  v37 = (ServantRepeatTask_o *)sub_B2C42C(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v37, creator, v36, v34, v38);
  if ( !v30 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  ServantRepeatTask___c__DisplayClass3_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (ServantRepeatTask___c__DisplayClass3_0_o *)x) == 0LL) )
    sub_B2C434(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        v4->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        0LL);
}