void ServantReactTaskCreator___ctor(ServantReactTaskCreator_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  unsigned int v9; // w8

  if ( (byte_4C2A3F0 & 1) == 0 )
  {
    sub_1C2D490(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C2A3F0 = 1;
  }
  v5 = sub_1C2D538(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v5 )
    sub_1C2D6EC(0, v6);
  v9 = *(_DWORD *)(v5 + 24);
  if ( !v9 || (*(_DWORD *)(v5 + 32) = 2, v9 <= 2) )
    sub_1C2D6F4(v5, v5, v7);
  *(_DWORD *)(v5 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.execOrders, v5, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ProcState_k__BackingField = procState;
}


BattleLogicTask_o *ServantReactTaskCreator__Create(
        ServantReactTaskCreator_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicTask_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4C2A3F9 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    byte_4C2A3F9 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v4, v5);
  return v4;
}


BattleLogicTask_array *ServantReactTaskCreator__CreateTasks(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t ProcState_k__BackingField; // w8
  bool v13; // zf
  int v14; // w8
  System_Collections_Generic_List_object__o *v15; // x21
  const MethodInfo *v16; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x27
  System_Func_object__bool__o **v20; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v22; // x24
  System_Object_array *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w25
  ServantRepeatTask_o *v27; // x24
  const MethodInfo *v28; // x4
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4C2A3F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_ReactTaskTarget___);
    sub_1C2D490(&System_Func_ReactTaskTarget__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&ServantRepeatTask_TypeInfo);
    sub_1C2D490(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__);
    sub_1C2D490(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
    byte_4C2A3F8 = 1;
  }
  v5 = sub_1C2D6DC(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)logic, v10, v11);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v13 = (ProcState_k__BackingField & 0xFFFFFFFE) == 4 || ProcState_k__BackingField == 24;
  v14 = v13 ? 2 : 0;
  *(_DWORD *)(v5 + 32) = v14;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_25;
  max_length = execOrders->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    v20 = (System_Func_object__bool__o **)(v5 + 40);
    do
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C2D6F4(v6, v7, v16);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v19], v16);
      v22 = *v20;
      v23 = (System_Object_array *)Targets;
      if ( !*v20 )
      {
        v22 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v22,
          (Il2CppObject *)v5,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0);
        *(_QWORD *)(v5 + 40) = v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v22, v24, v25);
      }
      v6 = BasicHelper__Any_object__51084700(
             v23,
             (System_Func_T__bool__o *)v22,
             (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v6 )
      {
        v26 = *(_DWORD *)(v5 + 32);
        v27 = (ServantRepeatTask_o *)sub_1C2D6DC(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v27, this, (ReactTaskTarget_array *)v23, v26, v28);
        if ( !v15 )
          goto LABEL_25;
        items = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v15->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v27,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v27;
          sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v27, v29, v30);
        }
      }
      LODWORD(max_length) = execOrders->max_length;
    }
    while ( (__int64)++v19 < (int)max_length );
  }
  if ( !v15 )
LABEL_25:
    sub_1C2D6EC(v6, v7);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


int32_t ServantReactTaskCreator__GetMaxPriorityEachProcState(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w8

  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  if ( (ProcState_k__BackingField & 0xFFFFFFFE) == 4 )
    return 2;
  else
    return 2 * (ProcState_k__BackingField == 24);
}


bool ServantReactTaskCreator__IsCreatable(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        BattleServantData_o *svtData,
        int32_t priority,
        const MethodInfo *method)
{
  return 0;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakeEnemyTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTargetFilter_o *TargetFilter_k__BackingField; // x19
  ReactTaskTarget_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C2A3F6 & 1) == 0 )
  {
    sub_1C2D490(&ReactTaskTargetEnemy_TypeInfo);
    byte_4C2A3F6 = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1C2D6DC(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakeNpcTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C2A3F7 & 1) == 0 )
  {
    sub_1C2D490(&ReactTaskTargetNpc_TypeInfo);
    byte_4C2A3F7 = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C2D6DC(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0, v3);
  return v2;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakePlayerTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C2A3F5 & 1) == 0 )
  {
    sub_1C2D490(&ReactTaskTargetPlayer_TypeInfo);
    byte_4C2A3F5 = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C2D6DC(ReactTaskTargetPlayer_TypeInfo);
  ReactTaskTarget___ctor(v2, 0, v3);
  return v2;
}


ReactTaskTarget_array *ServantReactTaskCreator__MakeTargets(
        ServantReactTaskCreator_o *this,
        int32_t execOrder,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppMethodPointer methodPtr; // x9
  ReactTaskTarget_array *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  ReactTaskTarget_o *v13; // x20
  __int64 v15; // x0

  if ( (byte_4C2A3F4 & 1) == 0 )
  {
    sub_1C2D490(&ReactTaskTarget___TypeInfo);
    byte_4C2A3F4 = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1C2D538(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
    v6 = this->klass->vtable._6_MakeNpcTarget.method;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1C2D538(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
    v6 = this->klass->vtable._5_MakeEnemyTarget.method;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1C2D538(ReactTaskTarget___TypeInfo, 0);
    v5 = sub_1C2D538(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._4_MakePlayerTarget.methodPtr;
    v6 = this->klass->vtable._4_MakePlayerTarget.method;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, const MethodInfo *))methodPtr)(this, v6);
  if ( !v8 )
    sub_1C2D6EC(v9, v10);
  v13 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_1C2D5CC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v15 = sub_1C2D710(0);
      sub_1C2D5B8(v15, 0);
    }
  }
  if ( !LODWORD(v8->max_length) )
    sub_1C2D6F4(v9, v10, v11);
  v8->m_Items[0] = v13;
  sub_1C2D434((CGThumbnailListItem_o *)v8->m_Items, (int32_t)v13, v11, v12);
  return v8;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_4C2A3F3 & 1) == 0 )
  {
    sub_1C2D490(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C2A3F3 = 1;
  }
  v3 = sub_1C2D538(ServantReactTaskCreator_ExecOrder___TypeInfo, 1);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2D6F4(v3, v3, v5);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNEP(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int v7; // w8

  if ( (byte_4C2A3F2 & 1) == 0 )
  {
    sub_1C2D490(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C2A3F2 = 1;
  }
  v3 = sub_1C2D538(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 2, v7 == 1) )
    sub_1C2D6F4(v3, v3, v5);
  *(_DWORD *)(v3 + 36) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNPE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  unsigned int v7; // w8

  if ( (byte_4C2A3F1 & 1) == 0 )
  {
    sub_1C2D490(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C2A3F1 = 1;
  }
  v3 = sub_1C2D538(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 2, v7 <= 2) )
    sub_1C2D6F4(v3, v3, v5);
  *(_DWORD *)(v3 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.execOrders = orders;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)orders, (int32_t)method, v3);
  return this;
}


int32_t ServantReactTaskCreator__get_ProcState(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  return this->fields._ProcState_k__BackingField;
}


ReactTaskTargetFilter_o *ServantReactTaskCreator__get_TargetFilter(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetFilter_k__BackingField;
}


void ServantReactTaskCreator__set_ProcState(ServantReactTaskCreator_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ProcState_k__BackingField = value;
}


void ServantReactTaskCreator__set_TargetFilter(
        ServantReactTaskCreator_o *this,
        ReactTaskTargetFilter_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TargetFilter_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._TargetFilter_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void ServantReactTaskCreator___c__DisplayClass20_0___ctor(
        ServantReactTaskCreator___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantReactTaskCreator___c__DisplayClass20_0___CreateTasks_b__0(
        ServantReactTaskCreator___c__DisplayClass20_0_o *this,
        ReactTaskTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, const MethodInfo *))x->klass->vtable._6_ExistPriorityUpToAny.methodPtr)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._6_ExistPriorityUpToAny.method);
}