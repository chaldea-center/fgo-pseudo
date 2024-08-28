// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A0B879 & 1) == 0 )
  {
    sub_1B686D4(&ServantReactTaskCreator_ExecOrder___TypeInfo, *(_QWORD *)&procState);
    byte_4A0B879 = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B6877C(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_1B68930(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
    sub_1B68938(v5, v5);
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)v5, v7, v8);
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

  if ( (byte_4A0B881 & 1) == 0 )
  {
    sub_1B686D4(&BattleLogicTask_TypeInfo, svtData);
    byte_4A0B881 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1B68920(BattleLogicTask_TypeInfo);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *v20; // x21
  const MethodInfo *v21; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v23; // x8
  unsigned __int64 v24; // x27
  System_Func_object__bool__o **v25; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v27; // x24
  System_Object_array *v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w25
  ServantRepeatTask_o *v32; // x24
  const MethodInfo *v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_4A0B880 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_Any_ReactTaskTarget___, logic);
    sub_1B686D4(&System_Func_ReactTaskTarget__bool__TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_1B686D4(&ServantRepeatTask_TypeInfo, v10);
    sub_1B686D4(&Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__, v11);
    sub_1B686D4(&ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo, v12);
    byte_4A0B880 = 1;
  }
  v13 = sub_1B68920(ServantReactTaskCreator___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = logic;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)logic, v18, v19);
  *(_DWORD *)(v13 + 32) = 2 * ((this->fields._ProcState_k__BackingField & 0xFFFFFFFE) == 4);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_19;
  v23 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = (System_Func_object__bool__o **)(v13 + 40);
    do
    {
      if ( v24 >= (unsigned int)v23 )
        sub_1B68938(v14, v15);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v24 + 1], v21);
      v27 = *v25;
      v28 = (System_Object_array *)Targets;
      if ( !*v25 )
      {
        v27 = (System_Func_object__bool__o *)sub_1B68920(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v13,
          Method_ServantReactTaskCreator___c__DisplayClass15_0__CreateTasks_b__0__,
          0LL);
        *(_QWORD *)(v13 + 40) = v27;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)v27, v29, v30);
      }
      v14 = BasicHelper__Any_object__48452092(
              v28,
              (System_Func_T__bool__o *)v27,
              (const MethodInfo_2E351FC *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v14 )
      {
        v31 = *(_DWORD *)(v13 + 32);
        v32 = (ServantRepeatTask_o *)sub_1B68920(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v32, this, (ReactTaskTarget_array *)v28, v31, v33);
        if ( !v20 )
          goto LABEL_19;
        items = v20->fields._items;
        v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v32,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v32;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
        }
      }
      LODWORD(v23) = execOrders->max_length;
    }
    while ( (__int64)++v24 < (int)v23 );
  }
  if ( !v20 )
LABEL_19:
    sub_1B68930(v14, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  Il2CppObject *v2; // x19

  if ( (byte_4A0B87E & 1) == 0 )
  {
    sub_1B686D4(&ReactTaskTargetEnemy_TypeInfo, method);
    byte_4A0B87E = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ReactTaskTargetEnemy_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (ReactTaskTarget_o *)v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4A0B87F & 1) == 0 )
  {
    sub_1B686D4(&ReactTaskTargetNpc_TypeInfo, method);
    byte_4A0B87F = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ReactTaskTargetNpc_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (ReactTaskTarget_o *)v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4A0B87D & 1) == 0 )
  {
    sub_1B686D4(&ReactTaskTargetPlayer_TypeInfo, method);
    byte_4A0B87D = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ReactTaskTargetPlayer_TypeInfo);
  System_Object___ctor(v2, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  ReactTaskTarget_o *v13; // x20
  __int64 v15; // x0

  if ( (byte_4A0B87C & 1) == 0 )
  {
    sub_1B686D4(&ReactTaskTarget___TypeInfo, *(_QWORD *)&execOrder);
    byte_4A0B87C = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1B6877C(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1B6877C(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1B6877C(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_1B6877C(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_1B68930(v9, v10);
  v13 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_1B68810(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v15 = sub_1B68954(0LL);
      sub_1B687FC(v15, 0LL);
    }
  }
  if ( !v8->max_length )
    sub_1B68938(v9, v10);
  v8->m_Items[0] = v13;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)v13, v11, v12);
  return v8;
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

  if ( (byte_4A0B87B & 1) == 0 )
  {
    sub_1B686D4(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4A0B87B = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B6877C(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1B68930(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length == 1) )
    sub_1B68938(v3, v3);
  v3->m_Items[2] = 1;
  this->fields.execOrders = v3;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
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

  if ( (byte_4A0B87A & 1) == 0 )
  {
    sub_1B686D4(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4A0B87A = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B6877C(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1B68930(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length <= 2) )
    sub_1B68938(v3, v3);
  v3->m_Items[3] = 1;
  this->fields.execOrders = v3;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.execOrders = orders;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.execOrders, (int32_t)orders, (int32_t)method, v3);
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
    sub_1B68930(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}