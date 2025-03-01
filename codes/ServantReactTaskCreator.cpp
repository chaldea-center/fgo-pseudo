// local variable allocation has failed, the output may be wrong!
void __fastcall ServantReactTaskCreator___ctor(
        ServantReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int max_length; // w8

  if ( (byte_4C00586 & 1) == 0 )
  {
    sub_1C2E12C(&ServantReactTaskCreator_ExecOrder___TypeInfo, *(_QWORD *)&procState);
    byte_4C00586 = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C2E1D4(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_1C2E388(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
    sub_1C2E390(v5, v5);
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4C0058F & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask_TypeInfo, svtData);
    byte_4C0058F = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1C2E378(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v4, 0LL);
  return v4;
}


BattleLogicTask_array *__fastcall ServantReactTaskCreator__CreateTasks(
        ServantReactTaskCreator_o *this,
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
  __int64 v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t ProcState_k__BackingField; // w8
  bool v29; // zf
  int v30; // w8
  System_Collections_Generic_List_object__o *v31; // x21
  const MethodInfo *v32; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v34; // x8
  unsigned __int64 v35; // x27
  System_Func_object__bool__o **v36; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v38; // x24
  System_Object_array *v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int32_t v46; // w25
  ServantRepeatTask_o *v47; // x24
  const MethodInfo *v48; // x4
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0

  if ( (byte_4C0058E & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_ReactTaskTarget___, logic);
    sub_1C2E12C(&System_Func_ReactTaskTarget__bool__TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_1C2E12C(&ServantRepeatTask_TypeInfo, v10);
    sub_1C2E12C(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__, v11);
    sub_1C2E12C(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo, v12);
    byte_4C0058E = 1;
  }
  v13 = sub_1C2E378(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = logic;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)logic, v22, v23, v24, v25, v26, v27);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v29 = (ProcState_k__BackingField & 0xFFFFFFFE) == 4 || ProcState_k__BackingField == 24;
  v30 = v29 ? 2 : 0;
  *(_DWORD *)(v13 + 32) = v30;
  v31 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_25;
  v34 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    v36 = (System_Func_object__bool__o **)(v13 + 40);
    do
    {
      if ( v35 >= (unsigned int)v34 )
        sub_1C2E390(v14, v15);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v35 + 1], v32);
      v38 = *v36;
      v39 = (System_Object_array *)Targets;
      if ( !*v36 )
      {
        v38 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v38,
          (Il2CppObject *)v13,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0LL);
        *(_QWORD *)(v13 + 40) = v38;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)v38, v40, v41, v42, v43, v44, v45);
      }
      v14 = BasicHelper__Any_object__50053864(
              v39,
              (System_Func_T__bool__o *)v38,
              (const MethodInfo_2FBC2E8 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v14 )
      {
        v46 = *(_DWORD *)(v13 + 32);
        v47 = (ServantRepeatTask_o *)sub_1C2E378(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v47, this, (ReactTaskTarget_array *)v39, v46, v48);
        if ( !v31 )
          goto LABEL_25;
        items = v31->fields._items;
        v56 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v31->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)v47,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v58[4] = (Il2CppClass *)v47;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v47, v49, v50, v51, v52, v53, v54);
        }
      }
      LODWORD(v34) = execOrders->max_length;
    }
    while ( (__int64)++v35 < (int)v34 );
  }
  if ( !v31 )
LABEL_25:
    sub_1C2E388(v14, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v31,
                                    (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


int32_t __fastcall ServantReactTaskCreator__GetMaxPriorityEachProcState(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w8

  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  if ( (ProcState_k__BackingField & 0xFFFFFFFE) == 4 )
    return 2;
  else
    return 2 * (ProcState_k__BackingField == 24);
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
  ReactTaskTargetFilter_o *TargetFilter_k__BackingField; // x19
  ReactTaskTarget_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C0058C & 1) == 0 )
  {
    sub_1C2E12C(&ReactTaskTargetEnemy_TypeInfo, method);
    byte_4C0058C = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1C2E378(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C0058D & 1) == 0 )
  {
    sub_1C2E12C(&ReactTaskTargetNpc_TypeInfo, method);
    byte_4C0058D = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C2E378(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0LL, v3);
  return v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C0058B & 1) == 0 )
  {
    sub_1C2E12C(&ReactTaskTargetPlayer_TypeInfo, method);
    byte_4C0058B = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C2E378(ReactTaskTargetPlayer_TypeInfo);
  ReactTaskTarget___ctor(v2, 0LL, v3);
  return v2;
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x20
  __int64 v19; // x0

  if ( (byte_4C0058A & 1) == 0 )
  {
    sub_1C2E12C(&ReactTaskTarget___TypeInfo, *(_QWORD *)&execOrder);
    byte_4C0058A = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1C2E1D4(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1C2E1D4(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1C2E1D4(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_1C2E1D4(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  v17 = v9;
  if ( v9 )
  {
    v9 = sub_1C2E268(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v19 = sub_1C2E3AC(0LL);
      sub_1C2E254(v19, 0LL);
    }
  }
  if ( !v8->max_length )
    sub_1C2E390(v9, v10);
  v8->m_Items[0] = (ReactTaskTarget_o *)v17;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  return v8;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C00589 & 1) == 0 )
  {
    sub_1C2E12C(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4C00589 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C2E1D4(ServantReactTaskCreator_ExecOrder___TypeInfo, 1LL);
  if ( !v3 )
    sub_1C2E388(0LL, v4);
  if ( !v3->max_length )
    sub_1C2E390(v3, v3);
  v3->m_Items[1] = 1;
  this->fields.execOrders = v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4C00588 & 1) == 0 )
  {
    sub_1C2E12C(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4C00588 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C2E1D4(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1C2E388(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length == 1) )
    sub_1C2E390(v3, v3);
  v3->m_Items[2] = 1;
  this->fields.execOrders = v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNPE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  unsigned int max_length; // w8

  if ( (byte_4C00587 & 1) == 0 )
  {
    sub_1C2E12C(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4C00587 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C2E1D4(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1C2E388(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length <= 2) )
    sub_1C2E390(v3, v3);
  v3->m_Items[3] = 1;
  this->fields.execOrders = v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.execOrders = orders;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.execOrders,
    (int64_t)orders,
    (int64_t)method,
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


ReactTaskTargetFilter_o *__fastcall ServantReactTaskCreator__get_TargetFilter(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetFilter_k__BackingField;
}


void __fastcall ServantReactTaskCreator__set_ProcState(
        ServantReactTaskCreator_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ProcState_k__BackingField = value;
}


void __fastcall ServantReactTaskCreator__set_TargetFilter(
        ServantReactTaskCreator_o *this,
        ReactTaskTargetFilter_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TargetFilter_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._TargetFilter_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantReactTaskCreator___c__DisplayClass20_0___ctor(
        ServantReactTaskCreator___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantReactTaskCreator___c__DisplayClass20_0___CreateTasks_b__0(
        ServantReactTaskCreator___c__DisplayClass20_0_o *this,
        ReactTaskTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}