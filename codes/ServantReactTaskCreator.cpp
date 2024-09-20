void __fastcall ServantReactTaskCreator___ctor(
        ServantReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  unsigned int max_length; // w8

  if ( (byte_4A5DDC0 & 1) == 0 )
  {
    sub_1B885B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4A5DDC0 = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B88658(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_1B8880C(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
    sub_1B88814(v5, v5);
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)v5, v7, v8);
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

  if ( (byte_4A5DDC9 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    byte_4A5DDC9 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t ProcState_k__BackingField; // w8
  bool v13; // zf
  int v14; // w8
  System_Collections_Generic_List_object__o *v15; // x21
  const MethodInfo *v16; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v18; // x8
  unsigned __int64 v19; // x27
  System_Func_object__bool__o **v20; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v22; // x24
  System_Object_array *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w25
  ServantRepeatTask_o *v27; // x24
  const MethodInfo *v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4A5DDC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_ReactTaskTarget___);
    sub_1B885B0(&System_Func_ReactTaskTarget__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&ServantRepeatTask_TypeInfo);
    sub_1B885B0(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__);
    sub_1B885B0(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
    byte_4A5DDC8 = 1;
  }
  v5 = sub_1B887FC(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)logic, v10, v11);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v13 = (ProcState_k__BackingField & 0xFFFFFFFE) == 4 || ProcState_k__BackingField == 24;
  v14 = v13 ? 2 : 0;
  *(_DWORD *)(v5 + 32) = v14;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_25;
  v18 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = (System_Func_object__bool__o **)(v5 + 40);
    do
    {
      if ( v19 >= (unsigned int)v18 )
        sub_1B88814(v6, v7);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v19 + 1], v16);
      v22 = *v20;
      v23 = (System_Object_array *)Targets;
      if ( !*v20 )
      {
        v22 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v22,
          (Il2CppObject *)v5,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0LL);
        *(_QWORD *)(v5 + 40) = v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)v22, v24, v25);
      }
      v6 = BasicHelper__Any_object__48672124(
             v23,
             (System_Func_T__bool__o *)v22,
             (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v6 )
      {
        v26 = *(_DWORD *)(v5 + 32);
        v27 = (ServantRepeatTask_o *)sub_1B887FC(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v27, this, (ReactTaskTarget_array *)v23, v26, v28);
        if ( !v15 )
          goto LABEL_25;
        items = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v27,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v27;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v27, v29, v30);
        }
      }
      LODWORD(v18) = execOrders->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !v15 )
LABEL_25:
    sub_1B8880C(v6, v7);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4A5DDC6 & 1) == 0 )
  {
    sub_1B885B0(&ReactTaskTargetEnemy_TypeInfo);
    byte_4A5DDC6 = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1B887FC(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4A5DDC7 & 1) == 0 )
  {
    sub_1B885B0(&ReactTaskTargetNpc_TypeInfo);
    byte_4A5DDC7 = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1B887FC(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0LL, v3);
  return v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4A5DDC5 & 1) == 0 )
  {
    sub_1B885B0(&ReactTaskTargetPlayer_TypeInfo);
    byte_4A5DDC5 = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1B887FC(ReactTaskTargetPlayer_TypeInfo);
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
  int32_t v11; // w2
  int32_t v12; // w3
  ReactTaskTarget_o *v13; // x20
  __int64 v15; // x0

  if ( (byte_4A5DDC4 & 1) == 0 )
  {
    sub_1B885B0(&ReactTaskTarget___TypeInfo);
    byte_4A5DDC4 = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1B88658(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1B88658(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1B88658(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_1B88658(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_1B8880C(v9, v10);
  v13 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_1B886EC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v15 = sub_1B88830(0LL);
      sub_1B886D8(v15, 0LL);
    }
  }
  if ( !v8->max_length )
    sub_1B88814(v9, v10);
  v8->m_Items[0] = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)v13, v11, v12);
  return v8;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5DDC3 & 1) == 0 )
  {
    sub_1B885B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4A5DDC3 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B88658(ServantReactTaskCreator_ExecOrder___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  if ( !v3->max_length )
    sub_1B88814(v3, v3);
  v3->m_Items[1] = 1;
  this->fields.execOrders = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A5DDC2 & 1) == 0 )
  {
    sub_1B885B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4A5DDC2 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B88658(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length == 1) )
    sub_1B88814(v3, v3);
  v3->m_Items[2] = 1;
  this->fields.execOrders = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNPE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  unsigned int max_length; // w8

  if ( (byte_4A5DDC1 & 1) == 0 )
  {
    sub_1B885B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4A5DDC1 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B88658(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length <= 2) )
    sub_1B88814(v3, v3);
  v3->m_Items[3] = 1;
  this->fields.execOrders = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.execOrders = orders;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)orders, (int32_t)method, v3);
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

  this->fields._TargetFilter_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TargetFilter_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}