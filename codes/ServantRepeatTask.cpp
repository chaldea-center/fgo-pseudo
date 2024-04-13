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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)v8, (System_Int32_array **)targets, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)&v8[-1].fields.IsNotShowSkillMessage = maxPriority;
}


BattleLogicTask_array *__fastcall ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
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
  __int64 v36; // x21
  System_Collections_Generic_IEnumerable_TResult__o *IsNullOrEmpty; // x0
  __int64 v38; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v53; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v55; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v57; // x23
  ServantRepeatTask_o *v58; // x19
  const MethodInfo *v59; // x4

  if ( (byte_42EAA59 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___,
      (_DWORD)logic,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantRepeatTask_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__, v30, v31, v32);
    sub_B5D5C4(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo, v33, v34, v35);
    byte_42EAA59 = 1;
  }
  v36 = sub_B5D694(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  ServantRepeatTask___c__DisplayClass3_0___ctor((ServantRepeatTask___c__DisplayClass3_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_12;
  *(_QWORD *)(v36 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 24) = logic;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)logic, v45, v46, v47, v48, v49, v50);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v53,
      (Il2CppObject *)v36,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      (const MethodInfo_2C3041C *)Method_System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask____ctor__);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v53,
                      (const MethodInfo_1CB49A0 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v51 )
      goto LABEL_12;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v51,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v55 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v51 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_12:
    sub_B5D69C(IsNullOrEmpty, v38);
  }
  creator = this->fields.creator;
  v57 = this->fields.targets;
  v58 = (ServantRepeatTask_o *)sub_B5D694(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v58, creator, v57, v55, v59);
  if ( !v51 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v51,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B5D69C(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        v4->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        0LL);
}