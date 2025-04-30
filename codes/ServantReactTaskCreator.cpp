// local variable allocation has failed, the output may be wrong!
void __fastcall ServantReactTaskCreator___ctor(
        ServantReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  unsigned int max_length; // w8

  if ( (byte_4A513D6 & 1) == 0 )
  {
    sub_1B863B8(&ServantReactTaskCreator_ExecOrder___TypeInfo, *(_QWORD *)&procState);
    byte_4A513D6 = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B86460(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_1B86614(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
    sub_1B8661C(v5, v5);
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)v5, v7, v8);
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

  if ( (byte_4A513DF & 1) == 0 )
  {
    sub_1B863B8(&BattleLogicTask_TypeInfo, svtData);
    byte_4A513DF = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1B86604(BattleLogicTask_TypeInfo);
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
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
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
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w25
  ServantRepeatTask_o *v35; // x24
  const MethodInfo *v36; // x4
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4A513DE & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_ReactTaskTarget___, logic);
    sub_1B863B8(&System_Func_ReactTaskTarget__bool__TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_1B863B8(&ServantRepeatTask_TypeInfo, v10);
    sub_1B863B8(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__, v11);
    sub_1B863B8(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo, v12);
    byte_4A513DE = 1;
  }
  v13 = sub_1B86604(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = logic;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)logic, v18, v19);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v21 = (ProcState_k__BackingField & 0xFFFFFFFE) == 4 || ProcState_k__BackingField == 24;
  v22 = v21 ? 2 : 0;
  *(_DWORD *)(v13 + 32) = v22;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_25;
  v26 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v28 = (System_Func_object__bool__o **)(v13 + 40);
    do
    {
      if ( v27 >= (unsigned int)v26 )
        sub_1B8661C(v14, v15);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v27 + 1], v24);
      v30 = *v28;
      v31 = (System_Object_array *)Targets;
      if ( !*v28 )
      {
        v30 = (System_Func_object__bool__o *)sub_1B86604(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v30,
          (Il2CppObject *)v13,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0LL);
        *(_QWORD *)(v13 + 40) = v30;
        sub_1B8635C((CGThumbnailListItem_o *)(v13 + 40), (int32_t)v30, v32, v33);
      }
      v14 = BasicHelper__Any_object__49642848(
              v31,
              (System_Func_T__bool__o *)v30,
              (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v14 )
      {
        v34 = *(_DWORD *)(v13 + 32);
        v35 = (ServantRepeatTask_o *)sub_1B86604(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v35, this, (ReactTaskTarget_array *)v31, v34, v36);
        if ( !v23 )
          goto LABEL_25;
        items = v23->fields._items;
        v40 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v23->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)v35,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v35;
          sub_1B8635C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v35, v37, v38);
        }
      }
      LODWORD(v26) = execOrders->max_length;
    }
    while ( (__int64)++v27 < (int)v26 );
  }
  if ( !v23 )
LABEL_25:
    sub_1B86614(v14, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v23,
                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4A513DC & 1) == 0 )
  {
    sub_1B863B8(&ReactTaskTargetEnemy_TypeInfo, method);
    byte_4A513DC = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1B86604(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4A513DD & 1) == 0 )
  {
    sub_1B863B8(&ReactTaskTargetNpc_TypeInfo, method);
    byte_4A513DD = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1B86604(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0LL, v3);
  return v2;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4A513DB & 1) == 0 )
  {
    sub_1B863B8(&ReactTaskTargetPlayer_TypeInfo, method);
    byte_4A513DB = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1B86604(ReactTaskTargetPlayer_TypeInfo);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ReactTaskTarget_o *v13; // x20
  __int64 v15; // x0

  if ( (byte_4A513DA & 1) == 0 )
  {
    sub_1B863B8(&ReactTaskTarget___TypeInfo, *(_QWORD *)&execOrder);
    byte_4A513DA = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1B86460(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1B86460(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1B86460(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_1B86460(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_1B86614(v9, v10);
  v13 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_1B864F4(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v15 = sub_1B86638(0LL);
      sub_1B864E0(v15, 0LL);
    }
  }
  if ( !v8->max_length )
    sub_1B8661C(v9, v10);
  v8->m_Items[0] = v13;
  sub_1B8635C((CGThumbnailListItem_o *)v8->m_Items, (int32_t)v13, v11, v12);
  return v8;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A513D9 & 1) == 0 )
  {
    sub_1B863B8(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4A513D9 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B86460(ServantReactTaskCreator_ExecOrder___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B86614(0LL, v4);
  if ( !v3->max_length )
    sub_1B8661C(v3, v3);
  v3->m_Items[1] = 1;
  this->fields.execOrders = v3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A513D8 & 1) == 0 )
  {
    sub_1B863B8(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4A513D8 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B86460(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1B86614(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length == 1) )
    sub_1B8661C(v3, v3);
  v3->m_Items[2] = 1;
  this->fields.execOrders = v3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNPE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_ExecOrder_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  unsigned int max_length; // w8

  if ( (byte_4A513D7 & 1) == 0 )
  {
    sub_1B863B8(&ServantReactTaskCreator_ExecOrder___TypeInfo, method);
    byte_4A513D7 = 1;
  }
  v3 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1B86460(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v3 )
    sub_1B86614(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 2, max_length <= 2) )
    sub_1B8661C(v3, v3);
  v3->m_Items[3] = 1;
  this->fields.execOrders = v3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.execOrders = orders;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)orders, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._TargetFilter_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._TargetFilter_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
    sub_1B86614(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}