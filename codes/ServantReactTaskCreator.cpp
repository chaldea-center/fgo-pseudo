// local variable allocation has failed, the output may be wrong!
void __fastcall ServantReactTaskCreator___ctor(
        ServantReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int max_length; // w8
  __int64 v14; // x0

  if ( (byte_4189BDB & 1) == 0 )
  {
    sub_B2C35C(&ServantReactTaskCreator_ExecOrder___TypeInfo, *(_QWORD *)&procState);
    byte_4189BDB = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B2C374(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
  {
    v14 = sub_B2C460(v5);
    sub_B2C400(v14, 0LL);
  }
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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

  if ( (byte_4189BE3 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, svtData);
    byte_4189BE3 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v4, 0LL);
  return v4;
}


BattleLogicTask_array *__fastcall ServantReactTaskCreator__CreateTasks(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  const MethodInfo *v29; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v31; // x8
  unsigned __int64 v32; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v33; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x24
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t v43; // w19
  ServantRepeatTask_o *v44; // x24
  const MethodInfo *v45; // x4
  __int64 v47; // x0

  if ( (byte_4189BE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_ReactTaskTarget___, logic);
    sub_B2C35C(&Method_System_Func_ReactTaskTarget__bool___ctor__, v4);
    sub_B2C35C(&System_Func_ReactTaskTarget__bool__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_B2C35C(&ServantRepeatTask_TypeInfo, v10);
    sub_B2C35C(&Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__, v11);
    sub_B2C35C(&ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo, v12);
    byte_4189BE2 = 1;
  }
  v13 = sub_B2C42C(ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo);
  ServantReactTaskCreator___c__DisplayClass15_0___ctor((ServantReactTaskCreator___c__DisplayClass15_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = logic;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)logic, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v13 + 32) = 2 * ((this->fields._ProcState_k__BackingField & 0xFFFFFFFE) == 4);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_17;
  v31 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v13 + 40);
    do
    {
      if ( v32 >= (unsigned int)v31 )
      {
        v47 = sub_B2C460(v14);
        sub_B2C400(v47, 0LL);
      }
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v32 + 1], v29);
      v35 = *v33;
      v36 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Targets;
      if ( !*v33 )
      {
        v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v35,
          (Il2CppObject *)v13,
          Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_ReactTaskTarget__bool___ctor__);
        *(_QWORD *)(v13 + 40) = v35;
        sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
      }
      v14 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v36,
              (System_Func_T__bool__o *)v35,
              (const MethodInfo_1726758 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v14 )
      {
        v43 = *(_DWORD *)(v13 + 32);
        v44 = (ServantRepeatTask_o *)sub_B2C42C(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v44, this, (ReactTaskTarget_array *)v36, v43, v45);
        if ( !v28 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v31) = execOrders->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)v31 );
  }
  if ( !v28 )
LABEL_17:
    sub_B2C434(v14, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  ReactTaskTargetEnemy_o *v2; // x19

  if ( (byte_4189BE0 & 1) == 0 )
  {
    sub_B2C35C(&ReactTaskTargetEnemy_TypeInfo, method);
    byte_4189BE0 = 1;
  }
  v2 = (ReactTaskTargetEnemy_o *)sub_B2C42C(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTargetEnemy___ctor(v2, 0LL);
  return (ReactTaskTarget_o *)v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTargetNpc_o *v2; // x19

  if ( (byte_4189BE1 & 1) == 0 )
  {
    sub_B2C35C(&ReactTaskTargetNpc_TypeInfo, method);
    byte_4189BE1 = 1;
  }
  v2 = (ReactTaskTargetNpc_o *)sub_B2C42C(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTargetNpc___ctor(v2, 0LL);
  return (ReactTaskTarget_o *)v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTargetPlayer_o *v2; // x19

  if ( (byte_4189BDF & 1) == 0 )
  {
    sub_B2C35C(&ReactTaskTargetPlayer_TypeInfo, method);
    byte_4189BDF = 1;
  }
  v2 = (ReactTaskTargetPlayer_o *)sub_B2C42C(ReactTaskTargetPlayer_TypeInfo);
  ReactTaskTargetPlayer___ctor(v2, 0LL);
  return (ReactTaskTarget_o *)v2;
}


// local variable allocation has failed, the output may be wrong!
ReactTaskTarget_array *__fastcall ServantReactTaskCreator__MakeTargets(
        ServantReactTaskCreator_o *this,
        int32_t execOrder,
        const MethodInfo *method)
{
  __int64 v5; // x0
  Il2CppMethodPointer methodPtr; // x1
  const MethodInfo *v7; // x9
  ReactTaskTarget_array *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x20
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_4189BDE & 1) == 0 )
  {
    sub_B2C35C(&ReactTaskTarget___TypeInfo, *(_QWORD *)&execOrder);
    byte_4189BDE = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_B2C374(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_B2C374(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_B2C374(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_B2C374(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_B2C434(v9, v10);
  v17 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B2C41C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v20 = sub_B2C454(0LL);
      sub_B2C400(v20, 0LL);
    }
  }
  if ( !v8->max_length )
  {
    v19 = sub_B2C460(v9);
    sub_B2C400(v19, 0LL);
  }
  v8->m_Items[0] = (ReactTaskTarget_o *)v17;
  sub_B2C2F8((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  return v8;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v13; // x0

  if ( (byte_4189BDD & 1) == 0 )
  {
    sub_B2C35C(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4189BDD = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B2C374(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length == 1) )
  {
    v13 = sub_B2C460(v3);
    sub_B2C400(v13, 0LL);
  }
  v3->m_Items[2] = 1;
  this->fields.execOrders = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNPE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int max_length; // w8
  __int64 v13; // x0

  if ( (byte_4189BDC & 1) == 0 )
  {
    sub_B2C35C(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4189BDC = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B2C374(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length <= 2) )
  {
    v13 = sub_B2C460(v3);
    sub_B2C400(v13, 0LL);
  }
  v3->m_Items[3] = 1;
  this->fields.execOrders = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  sub_B2C2F8(
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
    sub_B2C434(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}