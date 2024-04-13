void __fastcall ServantReactTaskCreator___ctor(
        ServantReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ServantReactTaskCreator_ExecOrder_array *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  unsigned int max_length; // w8
  __int64 v15; // x0

  if ( (byte_42EAA4D & 1) == 0 )
  {
    sub_B5D5C4(&ServantReactTaskCreator_ExecOrder___TypeInfo, procState, (_DWORD)method, v3);
    byte_42EAA4D = 1;
  }
  v6 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B5D5DC(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
  max_length = v6->max_length;
  if ( !max_length || (v6->m_Items[1] = 2, max_length <= 2) )
  {
    v15 = sub_B5D6C8(v6);
    sub_B5D668(v15, 0LL);
  }
  v6->m_Items[3] = 1;
  this->fields.execOrders = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ProcState_k__BackingField = procState;
}


BattleLogicTask_o *__fastcall ServantReactTaskCreator__Create(
        ServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicTask_o *v4; // x19

  if ( (byte_42EAA55 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)svtData, (_DWORD)logic, method);
    byte_42EAA55 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v4, 0LL);
  return v4;
}


BattleLogicTask_array *__fastcall ServantReactTaskCreator__CreateTasks(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
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
  __int64 v32; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x21
  const MethodInfo *v48; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v50; // x8
  unsigned __int64 v51; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v52; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v54; // x24
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t v62; // w19
  ServantRepeatTask_o *v63; // x24
  const MethodInfo *v64; // x4
  __int64 v66; // x0

  if ( (byte_42EAA54 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_ReactTaskTarget___, (_DWORD)logic, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_ReactTaskTarget__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_ReactTaskTarget__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ServantRepeatTask_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__, v26, v27, v28);
    sub_B5D5C4(&ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo, v29, v30, v31);
    byte_42EAA54 = 1;
  }
  v32 = sub_B5D694(ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo);
  ServantReactTaskCreator___c__DisplayClass15_0___ctor((ServantReactTaskCreator___c__DisplayClass15_0_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_17;
  *(_QWORD *)(v32 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 24) = logic;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)logic, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v32 + 32) = 2 * ((this->fields._ProcState_k__BackingField & 0xFFFFFFFE) == 4);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_17;
  v50 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v50 >= 1 )
  {
    v51 = 0LL;
    v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v32 + 40);
    do
    {
      if ( v51 >= (unsigned int)v50 )
      {
        v66 = sub_B5D6C8(v33);
        sub_B5D668(v66, 0LL);
      }
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v51 + 1], v48);
      v54 = *v52;
      v55 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Targets;
      if ( !*v52 )
      {
        v54 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v54,
          (Il2CppObject *)v32,
          Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_ReactTaskTarget__bool___ctor__);
        *(_QWORD *)(v32 + 40) = v54;
        sub_B5D560((BattleServantConfConponent_o *)(v32 + 40), (System_Int32_array **)v54, v56, v57, v58, v59, v60, v61);
      }
      v33 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v55,
              (System_Func_T__bool__o *)v54,
              (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v33 )
      {
        v62 = *(_DWORD *)(v32 + 32);
        v63 = (ServantRepeatTask_o *)sub_B5D694(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v63, this, (ReactTaskTarget_array *)v55, v62, v64);
        if ( !v47 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v47,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v50) = execOrders->max_length;
      ++v51;
    }
    while ( (__int64)v51 < (int)v50 );
  }
  if ( !v47 )
LABEL_17:
    sub_B5D69C(v33, v34);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


int32_t __fastcall ServantReactTaskCreator__GetMaxPriorityEachProcState(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  return 2 * ((this->fields._ProcState_k__BackingField & 0xFFFFFFFE) == 4);
}


bool __fastcall ServantReactTaskCreator__IsCreatable(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        BattleServantData_o *svtData,
        int32_t priority,
        const MethodInfo *method)
{
  return 0;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeEnemyTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ReactTaskTargetEnemy_o *v4; // x19

  if ( (byte_42EAA52 & 1) == 0 )
  {
    sub_B5D5C4(&ReactTaskTargetEnemy_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA52 = 1;
  }
  v4 = (ReactTaskTargetEnemy_o *)sub_B5D694(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTargetEnemy___ctor(v4, 0LL);
  return (ReactTaskTarget_o *)v4;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ReactTaskTargetNpc_o *v4; // x19

  if ( (byte_42EAA53 & 1) == 0 )
  {
    sub_B5D5C4(&ReactTaskTargetNpc_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA53 = 1;
  }
  v4 = (ReactTaskTargetNpc_o *)sub_B5D694(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTargetNpc___ctor(v4, 0LL);
  return (ReactTaskTarget_o *)v4;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ReactTaskTargetPlayer_o *v4; // x19

  if ( (byte_42EAA51 & 1) == 0 )
  {
    sub_B5D5C4(&ReactTaskTargetPlayer_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA51 = 1;
  }
  v4 = (ReactTaskTargetPlayer_o *)sub_B5D694(ReactTaskTargetPlayer_TypeInfo);
  ReactTaskTargetPlayer___ctor(v4, 0LL);
  return (ReactTaskTarget_o *)v4;
}


ReactTaskTarget_array *__fastcall ServantReactTaskCreator__MakeTargets(
        ServantReactTaskCreator_o *this,
        int32_t execOrder,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  Il2CppMethodPointer methodPtr; // x1
  const MethodInfo *v8; // x9
  ReactTaskTarget_array *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x20
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_42EAA50 & 1) == 0 )
  {
    sub_B5D5C4(&ReactTaskTarget___TypeInfo, execOrder, (_DWORD)method, v3);
    byte_42EAA50 = 1;
  }
  if ( execOrder == 2 )
  {
    v6 = sub_B5D5DC(ReactTaskTarget___TypeInfo, 1LL);
    v8 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v6 = sub_B5D5DC(ReactTaskTarget___TypeInfo, 1LL);
    v8 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_B5D5DC(ReactTaskTarget___TypeInfo, 0LL);
    v6 = sub_B5D5DC(ReactTaskTarget___TypeInfo, 1LL);
    v8 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v9 = (ReactTaskTarget_array *)v6;
  v10 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v8)(this, methodPtr);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  v18 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B5D684(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
      v21 = sub_B5D6BC(0LL);
      sub_B5D668(v21, 0LL);
    }
  }
  if ( !v9->max_length )
  {
    v20 = sub_B5D6C8(v10);
    sub_B5D668(v20, 0LL);
  }
  v9->m_Items[0] = (ReactTaskTarget_o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  return v9;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ServantReactTaskCreator_ExecOrder_array *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v15; // x0

  if ( (byte_42EAA4F & 1) == 0 )
  {
    sub_B5D5C4(&ServantReactTaskCreator_ExecOrder___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA4F = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B5D5DC(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length == 1) )
  {
    v15 = sub_B5D6C8(v5);
    sub_B5D668(v15, 0LL);
  }
  v5->m_Items[2] = 1;
  this->fields.execOrders = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNPE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ServantReactTaskCreator_ExecOrder_array *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int max_length; // w8
  __int64 v15; // x0

  if ( (byte_42EAA4E & 1) == 0 )
  {
    sub_B5D5C4(&ServantReactTaskCreator_ExecOrder___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA4E = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B5D5DC(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
  {
    v15 = sub_B5D6C8(v5);
    sub_B5D668(v15, 0LL);
  }
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.execOrders = orders;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)orders,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return this;
}


int32_t __fastcall ServantReactTaskCreator__get_ProcState(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  return this->fields._ProcState_k__BackingField;
}


void __fastcall ServantReactTaskCreator__set_ProcState(
        ServantReactTaskCreator_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ProcState_k__BackingField = value;
}


void __fastcall ServantReactTaskCreator___c__DisplayClass15_0___ctor(
        ServantReactTaskCreator___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantReactTaskCreator___c__DisplayClass15_0___CreateTasks_b__0(
        ServantReactTaskCreator___c__DisplayClass15_0_o *this,
        ReactTaskTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}