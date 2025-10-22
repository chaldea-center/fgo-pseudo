void ServantReactTaskCreator___ctor(ServantReactTaskCreator_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  unsigned int v9; // w8

  if ( (byte_4C59FF7 & 1) == 0 )
  {
    sub_1C3E564(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C59FF7 = 1;
  }
  v5 = sub_1C3E60C(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v5 )
    sub_1C3E7C0(0, v6);
  v9 = *(_DWORD *)(v5 + 24);
  if ( !v9 || (*(_DWORD *)(v5 + 32) = 2, v9 <= 2) )
    sub_1C3E7C8(v5, v5);
  *(_DWORD *)(v5 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.execOrders, v5, v7, v8);
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

  if ( (byte_4C5A000 & 1) == 0 )
  {
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    byte_4C5A000 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1C3E7B0(BattleLogicTask_TypeInfo);
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
  unsigned int ProcState_k__BackingField; // w8
  int v13; // w8
  System_Collections_Generic_List_object__o *v14; // x21
  const MethodInfo *v15; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x27
  System_Func_object__bool__o **v19; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v21; // x24
  System_Object_array *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w25
  ServantRepeatTask_o *v26; // x24
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4C59FFF & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_ReactTaskTarget___);
    sub_1C3E564(&System_Func_ReactTaskTarget__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C3E564(&ServantRepeatTask_TypeInfo);
    sub_1C3E564(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__);
    sub_1C3E564(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
    byte_4C59FFF = 1;
  }
  v5 = sub_1C3E7B0(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)logic, v10, v11);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  if ( ProcState_k__BackingField <= 0x18 && ((1 << ProcState_k__BackingField) & 0x1000030) != 0 )
    v13 = 2;
  else
    v13 = 2 * ((ProcState_k__BackingField & 0xFFFFFFFE) == 26);
  *(_DWORD *)(v5 + 32) = v13;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_23;
  max_length = execOrders->max_length;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    v19 = (System_Func_object__bool__o **)(v5 + 40);
    do
    {
      if ( v18 >= (unsigned int)max_length )
        sub_1C3E7C8(v6, v7);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v18], v15);
      v21 = *v19;
      v22 = (System_Object_array *)Targets;
      if ( !*v19 )
      {
        v21 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v21,
          (Il2CppObject *)v5,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0);
        *(_QWORD *)(v5 + 40) = v21;
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v21, v23, v24);
      }
      v6 = BasicHelper__Any_object__51261116(
             v22,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v6 )
      {
        v25 = *(_DWORD *)(v5 + 32);
        v26 = (ServantRepeatTask_o *)sub_1C3E7B0(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v26, this, (ReactTaskTarget_array *)v22, v25, v27);
        if ( !v14 )
          goto LABEL_23;
        items = v14->fields._items;
        v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v26,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v26;
          sub_1C3E508((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
        }
      }
      LODWORD(max_length) = execOrders->max_length;
    }
    while ( (__int64)++v18 < (int)max_length );
  }
  if ( !v14 )
LABEL_23:
    sub_1C3E7C0(v6, v7);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C59FFD & 1) == 0 )
  {
    sub_1C3E564(&ReactTaskTargetEnemy_TypeInfo);
    byte_4C59FFD = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1C3E7B0(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakeNpcTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C59FFE & 1) == 0 )
  {
    sub_1C3E564(&ReactTaskTargetNpc_TypeInfo);
    byte_4C59FFE = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C3E7B0(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0, v3);
  return v2;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakePlayerTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4C59FFC & 1) == 0 )
  {
    sub_1C3E564(&ReactTaskTargetPlayer_TypeInfo);
    byte_4C59FFC = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C3E7B0(ReactTaskTargetPlayer_TypeInfo);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ReactTaskTarget_o *v13; // x20
  __int64 v15; // x0

  if ( (byte_4C59FFB & 1) == 0 )
  {
    sub_1C3E564(&ReactTaskTarget___TypeInfo);
    byte_4C59FFB = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1C3E60C(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
    v6 = this->klass->vtable._6_MakeNpcTarget.method;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1C3E60C(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
    v6 = this->klass->vtable._5_MakeEnemyTarget.method;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1C3E60C(ReactTaskTarget___TypeInfo, 0);
    v5 = sub_1C3E60C(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._4_MakePlayerTarget.methodPtr;
    v6 = this->klass->vtable._4_MakePlayerTarget.method;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, const MethodInfo *))methodPtr)(this, v6);
  if ( !v8 )
    sub_1C3E7C0(v9, v10);
  v13 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_1C3E6A0(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v15 = sub_1C3E7E4(0);
      sub_1C3E68C(v15, 0);
    }
  }
  if ( !LODWORD(v8->max_length) )
    sub_1C3E7C8(v9, v10);
  v8->m_Items[0] = v13;
  sub_1C3E508((CGThumbnailListItem_o *)v8->m_Items, (int32_t)v13, v11, v12);
  return v8;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C59FFA & 1) == 0 )
  {
    sub_1C3E564(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C59FFA = 1;
  }
  v3 = sub_1C3E60C(ServantReactTaskCreator_ExecOrder___TypeInfo, 1);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C3E7C8(v3, v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNEP(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int v7; // w8

  if ( (byte_4C59FF9 & 1) == 0 )
  {
    sub_1C3E564(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C59FF9 = 1;
  }
  v3 = sub_1C3E60C(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 2, v7 == 1) )
    sub_1C3E7C8(v3, v3);
  *(_DWORD *)(v3 + 36) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNPE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  unsigned int v7; // w8

  if ( (byte_4C59FF8 & 1) == 0 )
  {
    sub_1C3E564(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4C59FF8 = 1;
  }
  v3 = sub_1C3E60C(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 2, v7 <= 2) )
    sub_1C3E7C8(v3, v3);
  *(_DWORD *)(v3 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.execOrders, v3, v5, v6);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.execOrders = orders;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.execOrders, (int32_t)orders, (int32_t)method, v3);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._TargetFilter_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
    sub_1C3E7C0(this, 0);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, const MethodInfo *))x->klass->vtable._6_ExistPriorityUpToAny.methodPtr)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._6_ExistPriorityUpToAny.method);
}