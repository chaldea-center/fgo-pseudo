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

  if ( (byte_4BDF2F8 & 1) == 0 )
  {
    sub_1C21E38(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4BDF2F8 = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C21EE0(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_1C22094(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
    sub_1C2209C(v5, v5);
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BDF301 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    byte_4BDF301 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v4, 0LL);
  return v4;
}


BattleLogicTask_array *__fastcall ServantReactTaskCreator__CreateTasks(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t ProcState_k__BackingField; // w8
  bool v21; // zf
  int v22; // w8
  System_Collections_Generic_List_object__o *v23; // x21
  const MethodInfo *v24; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v26; // x8
  unsigned __int64 v27; // x27
  System_Func_object__bool__o **v28; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v30; // x24
  System_Object_array *v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t v38; // w25
  ServantRepeatTask_o *v39; // x24
  const MethodInfo *v40; // x4
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0

  if ( (byte_4BDF300 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_ReactTaskTarget___);
    sub_1C21E38(&System_Func_ReactTaskTarget__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&ServantRepeatTask_TypeInfo);
    sub_1C21E38(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__);
    sub_1C21E38(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
    byte_4BDF300 = 1;
  }
  v5 = sub_1C22084(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)logic, v14, v15, v16, v17, v18, v19);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v21 = (ProcState_k__BackingField & 0xFFFFFFFE) == 4 || ProcState_k__BackingField == 24;
  v22 = v21 ? 2 : 0;
  *(_DWORD *)(v5 + 32) = v22;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_25;
  v26 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v28 = (System_Func_object__bool__o **)(v5 + 40);
    do
    {
      if ( v27 >= (unsigned int)v26 )
        sub_1C2209C(v6, v7);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v27 + 1], v24);
      v30 = *v28;
      v31 = (System_Object_array *)Targets;
      if ( !*v28 )
      {
        v30 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v30,
          (Il2CppObject *)v5,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0LL);
        *(_QWORD *)(v5 + 40) = v30;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)v30, v32, v33, v34, v35, v36, v37);
      }
      v6 = BasicHelper__Any_object__49917468(
             v31,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v6 )
      {
        v38 = *(_DWORD *)(v5 + 32);
        v39 = (ServantRepeatTask_o *)sub_1C22084(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v39, this, (ReactTaskTarget_array *)v31, v38, v40);
        if ( !v23 )
          goto LABEL_25;
        items = v23->fields._items;
        v48 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v23->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)v39,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v39;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v39, v41, v42, v43, v44, v45, v46);
        }
      }
      LODWORD(v26) = execOrders->max_length;
    }
    while ( (__int64)++v27 < (int)v26 );
  }
  if ( !v23 )
LABEL_25:
    sub_1C22094(v6, v7);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v23,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4BDF2FE & 1) == 0 )
  {
    sub_1C21E38(&ReactTaskTargetEnemy_TypeInfo);
    byte_4BDF2FE = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1C22084(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4BDF2FF & 1) == 0 )
  {
    sub_1C21E38(&ReactTaskTargetNpc_TypeInfo);
    byte_4BDF2FF = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C22084(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0LL, v3);
  return v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4BDF2FD & 1) == 0 )
  {
    sub_1C21E38(&ReactTaskTargetPlayer_TypeInfo);
    byte_4BDF2FD = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C22084(ReactTaskTargetPlayer_TypeInfo);
  ReactTaskTarget___ctor(v2, 0LL, v3);
  return v2;
}


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

  if ( (byte_4BDF2FC & 1) == 0 )
  {
    sub_1C21E38(&ReactTaskTarget___TypeInfo);
    byte_4BDF2FC = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1C21EE0(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1C21EE0(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1C21EE0(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_1C21EE0(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_1C22094(v9, v10);
  v17 = v9;
  if ( v9 )
  {
    v9 = sub_1C21F74(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v19 = sub_1C220B8(0LL);
      sub_1C21F60(v19, 0LL);
    }
  }
  if ( !v8->max_length )
    sub_1C2209C(v9, v10);
  v8->m_Items[0] = (ReactTaskTarget_o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4BDF2FB & 1) == 0 )
  {
    sub_1C21E38(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4BDF2FB = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C21EE0(ServantReactTaskCreator_ExecOrder___TypeInfo, 1LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  if ( !v3->max_length )
    sub_1C2209C(v3, v3);
  v3->m_Items[1] = 1;
  this->fields.execOrders = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BDF2FA & 1) == 0 )
  {
    sub_1C21E38(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4BDF2FA = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C21EE0(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length == 1) )
    sub_1C2209C(v3, v3);
  v3->m_Items[2] = 1;
  this->fields.execOrders = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BDF2F9 & 1) == 0 )
  {
    sub_1C21E38(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4BDF2F9 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1C21EE0(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length <= 2) )
    sub_1C2209C(v3, v3);
  v3->m_Items[3] = 1;
  this->fields.execOrders = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
    sub_1C22094(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}