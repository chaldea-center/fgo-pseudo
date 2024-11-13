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

  if ( (byte_4B18ED4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantReactTaskCreator_ExecOrder___TypeInfo, *(_QWORD *)&procState, method);
    byte_4B18ED4 = 1;
  }
  v5 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1BCA888(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v5 )
    sub_1BCAA3C(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 2, max_length <= 2) )
    sub_1BCAA44(v5, v5);
  v5->m_Items[3] = 1;
  this->fields.execOrders = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4B18EDD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, svtData, logic);
    byte_4B18EDD = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, svtData, logic, method);
  BattleLogicTask___ctor(v4, 0LL);
  return v4;
}


BattleLogicTask_array *__fastcall ServantReactTaskCreator__CreateTasks(
        ServantReactTaskCreator_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int32_t ProcState_k__BackingField; // w8
  bool v41; // zf
  int v42; // w8
  System_Collections_Generic_List_object__o *v43; // x21
  const MethodInfo *v44; // x2
  struct ServantReactTaskCreator_ExecOrder_array *execOrders; // x26
  __int64 v46; // x8
  unsigned __int64 v47; // x27
  System_Func_object__bool__o **v48; // x22
  ReactTaskTarget_array *Targets; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Func_object__bool__o *v53; // x24
  System_Object_array *v54; // x23
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x3
  int32_t v62; // w25
  ServantRepeatTask_o *v63; // x24
  const MethodInfo *v64; // x4
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0

  if ( (byte_4B18EDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ReactTaskTarget___, logic, method);
    sub_1BCA7E0(&System_Func_ReactTaskTarget__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantRepeatTask_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__, v18, v19);
    sub_1BCA7E0(&ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo, v20, v21);
    byte_4B18EDC = 1;
  }
  v22 = sub_1BCAA2C(ServantReactTaskCreator___c__DisplayClass20_0_TypeInfo, logic, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_25;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = logic;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)logic, v31, v32, v33, v34, v35, v36);
  ProcState_k__BackingField = this->fields._ProcState_k__BackingField;
  v41 = (ProcState_k__BackingField & 0xFFFFFFFE) == 4 || ProcState_k__BackingField == 24;
  v42 = v41 ? 2 : 0;
  *(_DWORD *)(v22 + 32) = v42;
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execOrders = this->fields.execOrders;
  if ( !execOrders )
    goto LABEL_25;
  v46 = *(_QWORD *)&execOrders->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = 0LL;
    v48 = (System_Func_object__bool__o **)(v22 + 40);
    do
    {
      if ( v47 >= (unsigned int)v46 )
        sub_1BCAA44(v23, v24);
      Targets = ServantReactTaskCreator__MakeTargets(this, execOrders->m_Items[v47 + 1], v44);
      v53 = *v48;
      v54 = (System_Object_array *)Targets;
      if ( !*v48 )
      {
        v53 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ReactTaskTarget__bool__TypeInfo, v50, v51, v52);
        System_Func_object__bool____ctor(
          v53,
          (Il2CppObject *)v22,
          Method_ServantReactTaskCreator___c__DisplayClass20_0__CreateTasks_b__0__,
          0LL);
        *(_QWORD *)(v22 + 40) = v53;
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 40), (int64_t)v53, v55, v56, v57, v58, v59, v60);
      }
      v23 = BasicHelper__Any_object__49274176(
              v54,
              (System_Func_T__bool__o *)v53,
              (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_ReactTaskTarget___);
      if ( v23 )
      {
        v62 = *(_DWORD *)(v22 + 32);
        v63 = (ServantRepeatTask_o *)sub_1BCAA2C(ServantRepeatTask_TypeInfo, v24, v44, v61);
        ServantRepeatTask___ctor(v63, this, (ReactTaskTarget_array *)v54, v62, v64);
        if ( !v43 )
          goto LABEL_25;
        items = v43->fields._items;
        v72 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v43->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v43->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            (Il2CppObject *)v63,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          v43->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v63;
          sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v63, v65, v66, v67, v68, v69, v70);
        }
      }
      LODWORD(v46) = execOrders->max_length;
    }
    while ( (__int64)++v47 < (int)v46 );
  }
  if ( !v43 )
LABEL_25:
    sub_1BCAA3C(v23, v24);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v43,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v2; // x2
  __int64 v3; // x3
  ReactTaskTargetFilter_o *TargetFilter_k__BackingField; // x19
  ReactTaskTarget_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4B18EDA & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTargetEnemy_TypeInfo, method, v2);
    byte_4B18EDA = 1;
  }
  TargetFilter_k__BackingField = this->fields._TargetFilter_k__BackingField;
  v6 = (ReactTaskTarget_o *)sub_1BCAA2C(ReactTaskTargetEnemy_TypeInfo, method, v2, v3);
  ReactTaskTarget___ctor(v6, TargetFilter_k__BackingField, v7);
  return v6;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakeNpcTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ReactTaskTarget_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( (byte_4B18EDB & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTargetNpc_TypeInfo, method, v2);
    byte_4B18EDB = 1;
  }
  v4 = (ReactTaskTarget_o *)sub_1BCAA2C(ReactTaskTargetNpc_TypeInfo, method, v2, v3);
  ReactTaskTarget___ctor(v4, 0LL, v5);
  return v4;
}


ReactTaskTarget_o *__fastcall ServantReactTaskCreator__MakePlayerTarget(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ReactTaskTarget_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( (byte_4B18ED9 & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTargetPlayer_TypeInfo, method, v2);
    byte_4B18ED9 = 1;
  }
  v4 = (ReactTaskTarget_o *)sub_1BCAA2C(ReactTaskTargetPlayer_TypeInfo, method, v2, v3);
  ReactTaskTarget___ctor(v4, 0LL, v5);
  return v4;
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

  if ( (byte_4B18ED8 & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTarget___TypeInfo, *(_QWORD *)&execOrder, method);
    byte_4B18ED8 = 1;
  }
  if ( execOrder == 2 )
  {
    v5 = sub_1BCA888(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._6_MakeNpcTarget.method;
    methodPtr = this->klass->vtable._7_IsCreatable.methodPtr;
  }
  else if ( execOrder == 1 )
  {
    v5 = sub_1BCA888(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._5_MakeEnemyTarget.method;
    methodPtr = this->klass->vtable._6_MakeNpcTarget.methodPtr;
  }
  else
  {
    if ( execOrder )
      return (ReactTaskTarget_array *)sub_1BCA888(ReactTaskTarget___TypeInfo, 0LL);
    v5 = sub_1BCA888(ReactTaskTarget___TypeInfo, 1LL);
    v7 = this->klass->vtable._4_MakePlayerTarget.method;
    methodPtr = this->klass->vtable._5_MakeEnemyTarget.methodPtr;
  }
  v8 = (ReactTaskTarget_array *)v5;
  v9 = ((__int64 (__fastcall *)(ServantReactTaskCreator_o *, Il2CppMethodPointer))v7)(this, methodPtr);
  if ( !v8 )
    sub_1BCAA3C(v9, v10);
  v17 = v9;
  if ( v9 )
  {
    v9 = sub_1BCA91C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v19 = sub_1BCAA60(0LL);
      sub_1BCA908(v19, 0LL);
    }
  }
  if ( !v8->max_length )
    sub_1BCAA44(v9, v10);
  v8->m_Items[0] = (ReactTaskTarget_o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  return v8;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantReactTaskCreator_ExecOrder_array *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B18ED7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantReactTaskCreator_ExecOrder___TypeInfo, method, v2);
    byte_4B18ED7 = 1;
  }
  v4 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1BCA888(ServantReactTaskCreator_ExecOrder___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
  if ( !v4->max_length )
    sub_1BCAA44(v4, v4);
  v4->m_Items[1] = 1;
  this->fields.execOrders = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v4, v6, v7, v8, v9, v10, v11);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNEP(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantReactTaskCreator_ExecOrder_array *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B18ED6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantReactTaskCreator_ExecOrder___TypeInfo, method, v2);
    byte_4B18ED6 = 1;
  }
  v4 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1BCA888(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 2, max_length == 1) )
    sub_1BCAA44(v4, v4);
  v4->m_Items[2] = 1;
  this->fields.execOrders = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v4, v6, v7, v8, v9, v10, v11);
  return this;
}


ServantReactTaskCreator_o *__fastcall ServantReactTaskCreator__OrderNPE(
        ServantReactTaskCreator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantReactTaskCreator_ExecOrder_array *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  unsigned int max_length; // w8

  if ( (byte_4B18ED5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantReactTaskCreator_ExecOrder___TypeInfo, method, v2);
    byte_4B18ED5 = 1;
  }
  v4 = (struct ServantReactTaskCreator_ExecOrder_array *)sub_1BCA888(ServantReactTaskCreator_ExecOrder___TypeInfo, 3LL);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 2, max_length <= 2) )
    sub_1BCAA44(v4, v4);
  v4->m_Items[3] = 1;
  this->fields.execOrders = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.execOrders, (int64_t)v4, v6, v7, v8, v9, v10, v11);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, 0LL);
  return ((__int64 (__fastcall *)(ReactTaskTarget_o *, struct ServantReactTaskCreator_o *, struct BattleLogic_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._6_ExistPriorityUpToAny.method)(
           x,
           this->fields.__4__this,
           this->fields.logic,
           (unsigned int)this->fields.maxPriority,
           x->klass->vtable._7_ExistTargetPriority.methodPtr);
}