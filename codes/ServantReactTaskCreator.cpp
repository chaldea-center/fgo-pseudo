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

  if ( (byte_40FBB97 & 1) == 0 )
  {
    sub_B16FFC(&ServantReactTaskCreator_ExecOrder___TypeInfo, *(_QWORD *)&procState);
    byte_40FBB97 = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B17014(
                                                           ServantReactTaskCreator_ExecOrder___TypeInfo,
                                                           3LL,
                                                           method);
  if ( !v5 )
    sub_B170D4();
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_B16F98(
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
  __int64 v4; // x4
  BattleLogicTask_o *v5; // x19

  if ( (byte_40FBB9F & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, svtData);
    byte_40FBB9F = 1;
  }
  v5 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, svtData, logic, method, v4);
  BattleLogicTask___ctor(v5, 0LL);
  return v5;
}


BattleLogicTask_array *__fastcall ServantReactTaskCreator__CreateTasks(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
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
  __int64 v15; // x20
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v37; // x8
  unsigned __int64 v38; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v39; // x22
  ReactTaskTarget_array *Targets; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v45; // x24
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w19
  ServantRepeatTask_o *v56; // x24
  const MethodInfo *v57; // x4

  if ( (byte_40FBB9E & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_ReactTaskTarget___, logic);
    sub_B16FFC(&Method_System_Func_ReactTaskTarget__bool___ctor__, v6);
    sub_B16FFC(&System_Func_ReactTaskTarget__bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_B16FFC(&ServantRepeatTask_TypeInfo, v12);
    sub_B16FFC(&Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__, v13);
    sub_B16FFC(&ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo, v14);
    byte_40FBB9E = 1;
  }
  v15 = sub_B170CC(ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo, logic, method, v3, v4);
  ServantReactTaskCreator___c__DisplayClass15_0___ctor((ServantReactTaskCreator___c__DisplayClass15_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  *(_QWORD *)(v15 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = logic;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)logic, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v15 + 32) = 2 * ((this->fields._ProcState_k__BackingField & 0xFFFFFFFE) == 4);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_17;
  v37 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v15 + 40);
    do
    {
      if ( v38 >= (unsigned int)v37 )
      {
        sub_B17100(v33, v34, v35);
        sub_B170A0();
      }
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v38 + 1], v35);
      v45 = *v39;
      v46 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Targets;
      if ( !*v39 )
      {
        v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_ReactTaskTarget__bool__TypeInfo,
                                                                                   v41,
                                                                                   v42,
                                                                                   v43,
                                                                                   v44);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v45,
          (Il2CppObject *)v15,
          Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_ReactTaskTarget__bool___ctor__);
        *(_QWORD *)(v15 + 40) = v45;
        sub_B16F98((BattleServantConfConponent_o *)(v15 + 40), (System_Int32_array **)v45, v47, v48, v49, v50, v51, v52);
      }
      v33 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
              v46,
              (System_Func_T__bool__o *)v45,
              (const MethodInfo_18B6074 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v33 )
      {
        v55 = *(_DWORD *)(v15 + 32);
        v56 = (ServantRepeatTask_o *)sub_B170CC(ServantRepeatTask_TypeInfo, v34, v35, v53, v54);
        ServantRepeatTask___ctor(v56, this, (ReactTaskTarget_array *)v46, v55, v57);
        if ( !v32 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v32,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v37) = execOrders->max_length;
      ++v38;
    }
    while ( (__int64)v38 < (int)v37 );
  }
  if ( !v32 )
LABEL_17:
    sub_B170D4();
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  ReactTaskTargetEnemy_o *v5; // x19

  if ( (byte_40FBB9C & 1) == 0 )
  {
    sub_B16FFC(&ReactTaskTargetEnemy_TypeInfo, method);
    byte_40FBB9C = 1;
  }
  v5 = (ReactTaskTargetEnemy_o *)sub_B170CC(ReactTaskTargetEnemy_TypeInfo, method, v2, v3, v4);
  ReactTaskTargetEnemy___ctor(v5, 0LL);
  return (ReactTaskTarget_o *)v5;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  ReactTaskTargetNpc_o *v5; // x19

  if ( (byte_40FBB9D & 1) == 0 )
  {
    sub_B16FFC(&ReactTaskTargetNpc_TypeInfo, method);
    byte_40FBB9D = 1;
  }
  v5 = (ReactTaskTargetNpc_o *)sub_B170CC(ReactTaskTargetNpc_TypeInfo, method, v2, v3, v4);
  ReactTaskTargetNpc___ctor(v5, 0LL);
  return (ReactTaskTarget_o *)v5;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  ReactTaskTargetPlayer_o *v5; // x19

  if ( (byte_40FBB9B & 1) == 0 )
  {
    sub_B16FFC(&ReactTaskTargetPlayer_TypeInfo, method);
    byte_40FBB9B = 1;
  }
  v5 = (ReactTaskTargetPlayer_o *)sub_B170CC(ReactTaskTargetPlayer_TypeInfo, method, v2, v3, v4);
  ReactTaskTargetPlayer___ctor(v5, 0LL);
  return (ReactTaskTarget_o *)v5;
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

  if ( (byte_40FBB9A & 1) == 0 )
  {
    sub_B16FFC(&ReactTaskTarget___TypeInfo, *(_QWORD *)&execOrder);
    byte_40FBB9A = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_B17014(ReactTaskTarget___TypeInfo, 1LL, method);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_B17014(ReactTaskTarget___TypeInfo, 1LL, method);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_B17014(ReactTaskTarget___TypeInfo, 0LL, method);
    v5 = sub_B17014(ReactTaskTarget___TypeInfo, 1LL, method);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_B170D4();
  v17 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v8->max_length )
  {
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  v8->m_Items[0] = (ReactTaskTarget_o *)v17;
  sub_B16F98((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  return v8;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantReactTaskCreator_ExecOrder_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40FBB99 & 1) == 0 )
  {
    sub_B16FFC(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_40FBB99 = 1;
  }
  v4 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B17014(
                                                           ServantReactTaskCreator_ExecOrder___TypeInfo,
                                                           3LL,
                                                           v2);
  if ( !v4 )
    sub_B170D4();
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 2, max_length == 1) )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  v4->m_Items[2] = 1;
  this->fields.execOrders = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v4,
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
  __int64 v2; // x2
  struct ServantReactTaskCreator_ExecOrder_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int max_length; // w8

  if ( (byte_40FBB98 & 1) == 0 )
  {
    sub_B16FFC(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_40FBB98 = 1;
  }
  v4 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_B17014(
                                                           ServantReactTaskCreator_ExecOrder___TypeInfo,
                                                           3LL,
                                                           v2);
  if ( !v4 )
    sub_B170D4();
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 2, max_length <= 2) )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  v4->m_Items[3] = 1;
  this->fields.execOrders = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.execOrders,
    (System_Int32_array **)v4,
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
  sub_B16F98(
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
    sub_B170D4();
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}