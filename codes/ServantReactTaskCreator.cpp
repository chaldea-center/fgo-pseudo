void ServantReactTaskCreator___ctor(ServantReactTaskCreator_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  unsigned int v13; // w8

  if ( (byte_5973CE5 & 1) == 0 )
  {
    sub_2213A60(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_5973CE5 = 1;
  }
  v5 = sub_2213B20(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v5 )
    sub_2213CDC(0, v6);
  v13 = *(_DWORD *)(v5 + 24);
  if ( !v13 || (*(_DWORD *)(v5 + 32) = 2, v13 <= 2) )
    sub_2213CE4(v5);
  *(_DWORD *)(v5 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.execOrders, v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_5973CEE & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    byte_5973CEE = 1;
  }
  v4 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t ProcState_k__BackingField; // w8
  System_Collections_Generic_List_BattleLogicTask__c *v21; // x0
  bool v22; // zf
  bool v23; // zf
  int v24; // w8
  System_Collections_Generic_List_object__o *v25; // x21
  const MethodInfo *v26; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v29; // x26
  ReactTaskTarget_array *Targets; // x0
  System_Func_object__bool__o *v31; // x23
  System_Object_array *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w24
  ServantRepeatTask_o *v40; // x23
  const MethodInfo *v41; // x4
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0

  if ( (byte_5973CED & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ReactTaskTarget___);
    sub_2213A60(&System_Func_ReactTaskTarget__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&ServantRepeatTask_TypeInfo);
    sub_2213A60(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__);
    sub_2213A60(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
    byte_5973CED = 1;
  }
  v5 = sub_2213CCC(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = logic;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)logic, v14, v15, v16, v17, v18, v19);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v21 = System_Collections_Generic_List_BattleLogicTask__TypeInfo;
  v22 = (ProcState_k__BackingField & 0xFFFFFFFE) == 4 || ProcState_k__BackingField == 24;
  v23 = v22 || (ProcState_k__BackingField & 0xFFFFFFFE) == 26;
  v24 = v23 ? 2 : 0;
  *(_DWORD *)(v5 + 32) = v24;
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v21);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_28;
  max_length = execOrders->max_length;
  if ( (int)max_length >= 1 )
  {
    v29 = 0;
    do
    {
      if ( v29 >= (unsigned int)max_length )
        sub_2213CE4(v6);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v29], v26);
      v31 = *(System_Func_object__bool__o **)(v5 + 40);
      v32 = (System_Object_array *)Targets;
      if ( !v31 )
      {
        v31 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ReactTaskTarget__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v31,
          (Il2CppObject *)v5,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0);
        *(_QWORD *)(v5 + 40) = v31;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v31, v33, v34, v35, v36, v37, v38);
      }
      v6 = BasicHelper__Any_object__58785420(
             v32,
             (System_Func_T__bool__o *)v31,
             (const MethodInfo_380FE8C *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v6 )
      {
        v39 = *(_DWORD *)(v5 + 32);
        v40 = (ServantRepeatTask_o *)sub_2213CCC(ServantRepeatTask_TypeInfo);
        ServantRepeatTask___ctor(v40, this, (ReactTaskTarget_array *)v32, v39, v41);
        if ( !v25 )
          goto LABEL_28;
        items = v25->fields._items;
        v49 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_28;
        size = v25->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)v40,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v40;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v40, v42, v43, v44, v45, v46, v47);
        }
      }
      LODWORD(max_length) = execOrders->max_length;
    }
    while ( (__int64)++v29 < (int)max_length );
  }
  if ( !v25 )
LABEL_28:
    sub_2213CDC(v6, v7);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v25,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


int32_t ServantReactTaskCreator__GetMaxPriorityEachProcState(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  int32_t ProcState_k__BackingField; // w9

  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  if ( (ProcState_k__BackingField & 0xFFFFFFFE) == 0x1A
    || (ProcState_k__BackingField & 0xFFFFFFFE) == 4
    || ProcState_k__BackingField == 24 )
  {
    return 2;
  }
  else
  {
    return 0;
  }
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

  if ( (byte_5973CEB & 1) == 0 )
  {
    sub_2213A60(&ReactTaskTargetEnemy_TypeInfo);
    byte_5973CEB = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v4 = (ReactTaskTarget_o *)sub_2213CCC(ReactTaskTargetEnemy_TypeInfo);
  ReactTaskTarget___ctor(v4, TargetFilter_k__BackingField, v5);
  return v4;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakeNpcTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_5973CEC & 1) == 0 )
  {
    sub_2213A60(&ReactTaskTargetNpc_TypeInfo);
    byte_5973CEC = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_2213CCC(ReactTaskTargetNpc_TypeInfo);
  ReactTaskTarget___ctor(v2, 0, v3);
  return v2;
}


ReactTaskTarget_o *ServantReactTaskCreator__MakePlayerTarget(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  ReactTaskTarget_o *v2; // x19
  const MethodInfo *v3; // x2

  if ( (byte_5973CEA & 1) == 0 )
  {
    sub_2213A60(&ReactTaskTargetPlayer_TypeInfo);
    byte_5973CEA = 1;
  }
  v2 = (ReactTaskTarget_o *)sub_2213CCC(ReactTaskTargetPlayer_TypeInfo);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ReactTaskTarget_o *v17; // x20
  __int64 v18; // x1
  __int64 v20; // x0

  if ( (byte_5973CE9 & 1) == 0 )
  {
    sub_2213A60(&ReactTaskTarget___TypeInfo);
    byte_5973CE9 = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_2213B20(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
    v6 = this->klass->vtable._6_MakeNpcTarget.method;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_2213B20(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
    v6 = this->klass->vtable._5_MakeEnemyTarget.method;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_2213B20(ReactTaskTarget___TypeInfo, 0);
    v5 = sub_2213B20(ReactTaskTarget___TypeInfo, 1);
    methodPtr = this->klass->vtable._4_MakePlayerTarget.methodPtr;
    v6 = this->klass->vtable._4_MakePlayerTarget.method;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, const MethodInfo *))methodPtr)(this, v6);
  if ( !v8 )
    sub_2213CDC(v9, v10);
  v17 = (ReactTaskTarget_o *)v9;
  if ( v9 )
  {
    v9 = sub_2213BB4(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v20 = sub_2213D00(0, v18);
      sub_2213BA0(v20, 0);
    }
  }
  if ( !LODWORD(v8->max_length) )
    sub_2213CE4(v9);
  v8->m_Items[0] = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v8->m_Items, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  return v8;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5973CE8 & 1) == 0 )
  {
    sub_2213A60(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_5973CE8 = 1;
  }
  v3 = sub_2213B20(ServantReactTaskCreator_ExecOrder___TypeInfo, 1);
  if ( !v3 )
    sub_2213CDC(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_2213CE4(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.execOrders, v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNEP(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w8

  if ( (byte_5973CE7 & 1) == 0 )
  {
    sub_2213A60(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_5973CE7 = 1;
  }
  v3 = sub_2213B20(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 2, v11 == 1) )
    sub_2213CE4(v3);
  *(_DWORD *)(v3 + 36) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.execOrders, v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__OrderNPE(ServantReactTaskCreator_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  unsigned int v11; // w8

  if ( (byte_5973CE6 & 1) == 0 )
  {
    sub_2213A60(&ServantReactTaskCreator_ExecOrder___TypeInfo);
    byte_5973CE6 = 1;
  }
  v3 = sub_2213B20(ServantReactTaskCreator_ExecOrder___TypeInfo, 3);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 2, v11 <= 2) )
    sub_2213CE4(v3);
  *(_DWORD *)(v3 + 40) = 1;
  this->fields.execOrders = (struct ServantReactTaskCreator_ExecOrder_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.execOrders, v3, v5, v6, v7, v8, v9, v10);
  return this;
}


ServantReactTaskCreator_o *ServantReactTaskCreator__SetExecOrder(
        ServantReactTaskCreator_o *this,
        ServantReactTaskCreator_ExecOrder_array *orders,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.execOrders = orders;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.execOrders,
    (int32_t)orders,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TargetFilter_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TargetFilter_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
    sub_2213CDC(this, 0);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, const MethodInfo *))x->klass->vtable._6_ExistPriorityUpToAny.methodPtr)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._6_ExistPriorityUpToAny.method);
}