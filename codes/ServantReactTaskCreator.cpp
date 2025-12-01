void ServantReactTaskCreator___ctor(ServantReactTaskCreator_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  unsigned int v13; // w8

  if ( (byte_4CCA706 & 1) == 0 )
  {
    sub_1C713B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4CCA706 = 1;
  }
  v5 = sub_1C71458(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v5 )
    sub_1C71608(0, v6);
  v13 = *(_DWORD *)(v5 + 24);
  if ( !v13 || (*(_DWORD *)(v5 + 32) = 2, v13 <= 2) )
    sub_1C71610(v5);
  *(_DWORD *)(v5 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.execOrders, v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4CCA70F & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicTask_TypeInfo);
    byte_4CCA70F = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1C715FC(BattleLogicTask_TypeInfo);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int ProcState_k__BackingField; // w8
  int v21; // w8
  System_Collections_Generic_List_object__o *v22; // x21
  const MethodInfo *v23; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v26; // x27
  System_Func_object__bool__o **v27; // x22
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v29; // x24
  System_Object_array *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w25
  ServantRepeatTask_o *v38; // x24
  const MethodInfo *v39; // x4
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0

  if ( (byte_4CCA70E & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_ReactTaskTarget___);
    sub_1C713B0(&System_Func_ReactTaskTarget__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C713B0(&ServantRepeatTask_TypeInfo);
    sub_1C713B0(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__);
    sub_1C713B0(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
    byte_4CCA70E = 1;
  }
  v5 = sub_1C715FC(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)logic, v14, v15, v16, v17, v18, v19);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  if ( ProcState_k__BackingField <= 0x18 && ((1 << ProcState_k__BackingField) & 0x1000030) != 0 )
    v21 = 2;
  else
    v21 = 2 * ((ProcState_k__BackingField & 0xFFFFFFFE) == 26);
  *(_DWORD *)(v5 + 32) = v21;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_23;
  max_length = execOrders->max_length;
  if ( (int)max_length >= 1 )
  {
    v26 = 0;
    v27 = (System_Func_object__bool__o **)(v5 + 40);
    do
    {
      if ( v26 >= (unsigned int)max_length )
        sub_1C71610(v6);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v26], v23);
      v29 = *v27;
      v30 = (System_Object_array *)Targets;
      if ( !*v27 )
      {
        v29 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v29,
          (Il2CppObject *)v5,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0);
        *(_QWORD *)(v5 + 40) = v29;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)v29, v31, v32, v33, v34, v35, v36);
      }
      v6 = BasicHelper__Any_object__51593856(
             v30,
             (System_Func_T__bool__o *)v29,
             (const MethodInfo_3134280 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v6 )
      {
        v37 = *(_DWORD *)(v5 + 32);
        v38 = (ServantRepeatTask_o *)sub_1C715FC(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v38, this, (ReactTaskTarget_array *)v30, v37, v39);
        if ( !v22 )
          goto LABEL_23;
        items = v22->fields._items;
        v47 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v38,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v38;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v49 + 4), (int32_t)v38, v40, v41, v42, v43, v44, v45);
        }
      }
      LODWORD(max_length) = execOrders->max_length;
    }
    while ( (__int64)++v26 < (int)max_length );
  }
  if ( !v22 )
LABEL_23:
    sub_1C71608(v6, v7);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4CCA70C & 1) == 0 )
  {
    sub_1C713B0(&ReactTaskTargetEnemy_TypeInfo);
    byte_4CCA70C = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_1C715FC(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakeNpcTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4CCA70D & 1) == 0 )
  {
    sub_1C713B0(&ReactTaskTargetNpc_TypeInfo);
    byte_4CCA70D = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C715FC(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0, v3);
  return v2;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakePlayerTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_4CCA70B & 1) == 0 )
  {
    sub_1C713B0(&ReactTaskTargetPlayer_TypeInfo);
    byte_4CCA70B = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_1C715FC(ReactTaskTargetPlayer_TypeInfo);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ReactTaskTarget_o *v17; // x20
  __int64 v19; // x0

  if ( (byte_4CCA70A & 1) == 0 )
  {
    sub_1C713B0(&ReactTaskTarget___TypeInfo);
    byte_4CCA70A = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1C71458(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
    v6 = this->klass->vtable._6_MakeNpcTarget.method;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1C71458(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
    v6 = this->klass->vtable._5_MakeEnemyTarget.method;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1C71458(ReactTaskTarget___TypeInfo, 0);
    v5 = sub_1C71458(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._4_MakePlayerTarget.methodPtr;
    v6 = this->klass->vtable._4_MakePlayerTarget.method;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, const MethodInfo *))methodPtr)(this, v6);
  if ( !v8 )
    sub_1C71608(v9, v10);
  v17 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_1C714EC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v19 = sub_1C7162C(0);
      sub_1C714D8(v19, 0);
    }
  }
  if ( !LODWORD(v8->max_length) )
    sub_1C71610(v9);
  v8->m_Items[0] = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v8->m_Items, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  return v8;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CCA709 & 1) == 0 )
  {
    sub_1C713B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4CCA709 = 1;
  }
  v3 = sub_1C71458(ServantReactTaskCreator_ExecOrder___TypeInfo, 1);
  if ( !v3 )
    sub_1C71608(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C71610(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.execOrders, v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNEP(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w8

  if ( (byte_4CCA708 & 1) == 0 )
  {
    sub_1C713B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4CCA708 = 1;
  }
  v3 = sub_1C71458(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C71608(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 2, v11 == 1) )
    sub_1C71610(v3);
  *(_DWORD *)(v3 + 36) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.execOrders, v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNPE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  unsigned int v11; // w8

  if ( (byte_4CCA707 & 1) == 0 )
  {
    sub_1C713B0(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_4CCA707 = 1;
  }
  v3 = sub_1C71458(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_1C71608(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 2, v11 <= 2) )
    sub_1C71610(v3);
  *(_DWORD *)(v3 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.execOrders, v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.execOrders = orders;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.execOrders,
    (int32_t)orders,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._TargetFilter_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._TargetFilter_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, 0);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, const MethodInfo *))x->klass->vtable._6_ExistPriorityUpToAny.methodPtr)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._6_ExistPriorityUpToAny.method);
}