void ServantReactTaskCreator___ctor(ServantReactTaskCreator_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  unsigned int v8; // w8

  if ( (byte_4C3AB0B & 1) == 0 )
  {
    sub_1C32C20(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C3AB0B = 1;
  }
  v5 = sub_1C32CC8(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v5 )
    sub_1C32E7C(0);
  v8 = *(_DWORD *)(v5 + 24);
  if ( !v8 || (*(_DWORD *)(v5 + 32) = 2, v8 <= 2) )
    sub_1C32E84(v5);
  *(_DWORD *)(v5 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.execOrders, v5, v6, v7);
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

  if ( (byte_4C3AB14 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    byte_4C3AB14 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  unsigned int ProcState_k__BackingField; // w8
  int v12; // w8
  System_Collections_Generic_List_object__o *v13; // x21
  const MethodInfo *v14; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x27
  System_Func_object__bool__o **v18; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v20; // x24
  System_Object_array *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w25
  ServantRepeatTask_o *v25; // x24
  const MethodInfo *v26; // x4
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4C3AB13 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_ReactTaskTarget___);
    sub_1C32C20(&System_Func_ReactTaskTarget__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&ServantRepeatTask_TypeInfo);
    sub_1C32C20(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__);
    sub_1C32C20(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
    byte_4C3AB13 = 1;
  }
  v5 = sub_1C32E6C(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)logic, v9, v10);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  if ( ProcState_k__BackingField <= 0x18 && ((1 << ProcState_k__BackingField) & 0x1000030) != 0 )
    v12 = 2;
  else
    v12 = 2 * ((ProcState_k__BackingField & 0xFFFFFFFE) == 26);
  *(_DWORD *)(v5 + 32) = v12;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_23;
  max_length = execOrders->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    v18 = (System_Func_object__bool__o **)(v5 + 40);
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C32E84(v6);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v17], v14);
      v20 = *v18;
      v21 = (System_Object_array *)Targets;
      if ( !*v18 )
      {
        v20 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v20,
          (Il2CppObject *)v5,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0);
        *(_QWORD *)(v5 + 40) = v20;
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v20, v22, v23);
      }
      v6 = BasicHelper__Any_object__51144764(
             v21,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_30C683C *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v6 )
      {
        v24 = *(_DWORD *)(v5 + 32);
        v25 = (ServantRepeatTask_o *)sub_1C32E6C(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v25, this, (ReactTaskTarget_array *)v21, v24, v26);
        if ( !v13 )
          goto LABEL_23;
        items = v13->fields._items;
        v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v25,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v25;
          sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v25, v27, v28);
        }
      }
      LODWORD(max_length) = execOrders->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  if ( !v13 )
LABEL_23:
    sub_1C32E7C(v6);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


int32_t ServantReactTaskCreator__GetMaxPriorityEachProcState(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  unsigned int ProcState_k__BackingField; // w8

  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  if ( ProcState_k__BackingField <= 0x18 && ((1 << ProcState_k__BackingField) & 0x1000030) != 0 )
    return 2;
  else
    return 2 * ((ProcState_k__BackingField & 0xFFFFFFFE) == 26);
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

  if ( (byte_4C3AB11 & 1) == 0 )
  {
    sub_1C32C20(&ReactTaskTargetEnemy_TypeInfo);
    byte_4C3AB11 = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1C32E6C(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakeNpcTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C3AB12 & 1) == 0 )
  {
    sub_1C32C20(&ReactTaskTargetNpc_TypeInfo);
    byte_4C3AB12 = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C32E6C(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0, v3);
  return v2;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakePlayerTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C3AB10 & 1) == 0 )
  {
    sub_1C32C20(&ReactTaskTargetPlayer_TypeInfo);
    byte_4C3AB10 = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C32E6C(ReactTaskTargetPlayer_TypeInfo);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ReactTaskTarget_o *v12; // x20
  __int64 v14; // x0

  if ( (byte_4C3AB0F & 1) == 0 )
  {
    sub_1C32C20(&ReactTaskTarget___TypeInfo);
    byte_4C3AB0F = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1C32CC8(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
    v6 = this->klass->vtable._6_MakeNpcTarget.method;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1C32CC8(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
    v6 = this->klass->vtable._5_MakeEnemyTarget.method;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1C32CC8(ReactTaskTarget___TypeInfo, 0);
    v5 = sub_1C32CC8(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._4_MakePlayerTarget.methodPtr;
    v6 = this->klass->vtable._4_MakePlayerTarget.method;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, const MethodInfo *))methodPtr)(this, v6);
  if ( !v8 )
    sub_1C32E7C(v9);
  v12 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_1C32D5C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v14 = sub_1C32EA0(0);
      sub_1C32D48(v14, 0);
    }
  }
  if ( !LODWORD(v8->max_length) )
    sub_1C32E84(v9);
  v8->m_Items[0] = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)v8->m_Items, (int32_t)v12, v10, v11);
  return v8;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AB0E & 1) == 0 )
  {
    sub_1C32C20(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C3AB0E = 1;
  }
  v3 = sub_1C32CC8(ServantReactTaskCreator_ExecOrder___TypeInfo, 1);
  if ( !v3 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v4, v5);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNEP(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // w8

  if ( (byte_4C3AB0D & 1) == 0 )
  {
    sub_1C32C20(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C3AB0D = 1;
  }
  v3 = sub_1C32CC8(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C32E7C(0);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 || (*(_DWORD *)(v3 + 32) = 2, v6 == 1) )
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 36) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v4, v5);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNPE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  unsigned int v6; // w8

  if ( (byte_4C3AB0C & 1) == 0 )
  {
    sub_1C32C20(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C3AB0C = 1;
  }
  v3 = sub_1C32CC8(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C32E7C(0);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 || (*(_DWORD *)(v3 + 32) = 2, v6 <= 2) )
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v4, v5);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.execOrders = orders;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)orders, (int32_t)method, v3);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._TargetFilter_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, const MethodInfo *))x->klass->vtable._6_ExistPriorityUpToAny.methodPtr)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._6_ExistPriorityUpToAny.method);
}