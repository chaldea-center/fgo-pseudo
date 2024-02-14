// local variable allocation has failed, the output may be wrong!
void __fastcall ServantReactTaskCreator___ctor(
        ServantReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  unsigned int max_length; // w8
  __int64 v13; // x0

  if ( (byte_4216A2D & 1) == 0 )
  {
    sub_B0D8A4(&ServantReactTaskCreator_ExecOrder___TypeInfo, *(_QWORD *)&procState);
    byte_4216A2D = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B0D8BC(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_B0D97C(0LL);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
  {
    v13 = sub_B0D9A8(v5);
    sub_B0D948(v13, 0LL);
  }
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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

  if ( (byte_4216A35 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, svtData);
    byte_4216A35 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, svtData, logic);
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
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  const MethodInfo *v30; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v32; // x8
  unsigned __int64 v33; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v34; // x22
  ReactTaskTarget_array *Targets; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x24
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  int32_t v47; // w19
  ServantRepeatTask_o *v48; // x24
  const MethodInfo *v49; // x4
  __int64 v51; // x0

  if ( (byte_4216A34 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_ReactTaskTarget___, logic);
    sub_B0D8A4(&Method_System_Func_ReactTaskTarget__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_ReactTaskTarget__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_B0D8A4(&ServantRepeatTask_TypeInfo, v10);
    sub_B0D8A4(&Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__, v11);
    sub_B0D8A4(&ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo, v12);
    byte_4216A34 = 1;
  }
  v13 = sub_B0D974(ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo, logic, method);
  ServantReactTaskCreator___c__DisplayClass15_0___ctor((ServantReactTaskCreator___c__DisplayClass15_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 24) = logic;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)logic, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v13 + 32) = 2 * ((this->fields._ProcState_k__BackingField & 0xFFFFFFFE) == 4);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_17;
  v32 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v13 + 40);
    do
    {
      if ( v33 >= (unsigned int)v32 )
      {
        v51 = sub_B0D9A8(v14);
        sub_B0D948(v51, 0LL);
      }
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v33 + 1], v30);
      v38 = *v34;
      v39 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Targets;
      if ( !*v34 )
      {
        v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_ReactTaskTarget__bool__TypeInfo,
                                                                                   v36,
                                                                                   v37);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v38,
          (Il2CppObject *)v13,
          Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_ReactTaskTarget__bool___ctor__);
        *(_QWORD *)(v13 + 40) = v38;
        sub_B0D840((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)v38, v40, v41, v42, v43, v44, v45);
      }
      v14 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v39,
              (System_Func_T__bool__o *)v38,
              (const MethodInfo_17071E4 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v14 )
      {
        v47 = *(_DWORD *)(v13 + 32);
        v48 = (ServantRepeatTask_o *)sub_B0D974(ServantRepeatTask_TypeInfo, v46, v30);
        ServantRepeatTask___ctor(v48, this, (ReactTaskTarget_array *)v39, v47, v49);
        if ( !v29 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v32) = execOrders->max_length;
      ++v33;
    }
    while ( (__int64)v33 < (int)v32 );
  }
  if ( !v29 )
LABEL_17:
    sub_B0D97C(v14);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v2; // x2
  ReactTaskTargetEnemy_o *v3; // x19

  if ( (byte_4216A32 & 1) == 0 )
  {
    sub_B0D8A4(&ReactTaskTargetEnemy_TypeInfo, method);
    byte_4216A32 = 1;
  }
  v3 = (ReactTaskTargetEnemy_o *)sub_B0D974(ReactTaskTargetEnemy_TypeInfo, method, v2);
  ReactTaskTargetEnemy___ctor(v3, 0LL);
  return (ReactTaskTarget_o *)v3;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ReactTaskTargetNpc_o *v3; // x19

  if ( (byte_4216A33 & 1) == 0 )
  {
    sub_B0D8A4(&ReactTaskTargetNpc_TypeInfo, method);
    byte_4216A33 = 1;
  }
  v3 = (ReactTaskTargetNpc_o *)sub_B0D974(ReactTaskTargetNpc_TypeInfo, method, v2);
  ReactTaskTargetNpc___ctor(v3, 0LL);
  return (ReactTaskTarget_o *)v3;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ReactTaskTargetPlayer_o *v3; // x19

  if ( (byte_4216A31 & 1) == 0 )
  {
    sub_B0D8A4(&ReactTaskTargetPlayer_TypeInfo, method);
    byte_4216A31 = 1;
  }
  v3 = (ReactTaskTargetPlayer_o *)sub_B0D974(ReactTaskTargetPlayer_TypeInfo, method, v2);
  ReactTaskTargetPlayer___ctor(v3, 0LL);
  return (ReactTaskTarget_o *)v3;
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x20
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_4216A30 & 1) == 0 )
  {
    sub_B0D8A4(&ReactTaskTarget___TypeInfo, *(_QWORD *)&execOrder);
    byte_4216A30 = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_B0D8BC(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_B0D8BC(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_B0D8BC(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_B0D8BC(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_B0D97C(v9);
  v16 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B0D964(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v19 = sub_B0D99C(0LL);
      sub_B0D948(v19, 0LL);
    }
  }
  if ( !v8->max_length )
  {
    v18 = sub_B0D9A8(v9);
    sub_B0D948(v18, 0LL);
  }
  v8->m_Items[0] = (ReactTaskTarget_o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)v8->m_Items, v16, v10, v11, v12, v13, v14, v15);
  return v8;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v12; // x0

  if ( (byte_4216A2F & 1) == 0 )
  {
    sub_B0D8A4(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4216A2F = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B0D8BC(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_B0D97C(0LL);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length == 1) )
  {
    v12 = sub_B0D9A8(v3);
    sub_B0D948(v12, 0LL);
  }
  v3->m_Items[2] = 1;
  this->fields.execOrders = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNPE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned int max_length; // w8
  __int64 v12; // x0

  if ( (byte_4216A2E & 1) == 0 )
  {
    sub_B0D8A4(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4216A2E = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B0D8BC(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_B0D97C(0LL);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length <= 2) )
  {
    v12 = sub_B0D9A8(v3);
    sub_B0D948(v12, 0LL);
  }
  v3->m_Items[3] = 1;
  this->fields.execOrders = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  sub_B0D840(
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
    sub_B0D97C(this);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}