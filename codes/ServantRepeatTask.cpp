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
  sub_B52920(
    (BattleServantConfConponent_o *)&v8->fields.creator,
    (System_Int32_array **)creator,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v8->fields.targets = targets;
  v8 = (ServantRepeatTask_o *)((char *)v8 + 248);
  sub_B52920((BattleServantConfConponent_o *)v8, (System_Int32_array **)targets, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)&v8[-1].fields.IsNotShowSkillMessage = maxPriority;
}


BattleLogicTask_array *__fastcall ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_IEnumerable_TResult__o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v22; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v24; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v26; // x23
  ServantRepeatTask_o *v27; // x19
  const MethodInfo *v28; // x4

  if ( (byte_42B20FA & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    sub_B52984(&Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__);
    sub_B52984(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B52984(&ServantRepeatTask_TypeInfo);
    sub_B52984(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__);
    sub_B52984(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
    byte_42B20FA = 1;
  }
  v5 = sub_B52A54(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  ServantRepeatTask___c__DisplayClass3_0___ctor((ServantRepeatTask___c__DisplayClass3_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = logic;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)logic, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v22,
      (Il2CppObject *)v5,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v22,
                      (const MethodInfo_1B6B750 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v20 )
      goto LABEL_12;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v24 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v20 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_12:
    sub_B52A5C(IsNullOrEmpty, v7);
  }
  creator = this->fields.creator;
  v26 = this->fields.targets;
  v27 = (ServantRepeatTask_o *)sub_B52A54(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v27, creator, v26, v24, v28);
  if ( !v20 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B52A5C(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        v4->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        0LL);
}