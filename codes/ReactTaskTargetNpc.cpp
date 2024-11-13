void __fastcall ReactTaskTargetNpc___ctor(ReactTaskTargetNpc_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ReactTaskTarget___ctor((ReactTaskTarget_o *)this, 0LL, v2);
}


BattleLogicTask_array *__fastcall ReactTaskTargetNpc__CreateReactionTasksPartial(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *logicNpcAi; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B18ECE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask___TypeInfo, creator, logic);
    byte_4B18ECE = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_1BCA888(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_1BCAA3C(logicNpcAi, v10);
  return BattleLogicNpcAi__MakeAiCheckTask(logicNpcAi, creator->fields._ProcState_k__BackingField, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ReactTaskTargetNpc__ExistTargetPriority(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x8
  __int64 v32; // x8
  System_Collections_Generic_List_T__o *v33; // x19
  System_Func_object__bool__o *v34; // x20

  if ( (byte_4B18ECF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_AiNpcBattleServantData___, creator, logic);
    sub_1BCA7E0(&System_Func_AiNpcBattleServantData__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__, v10, v11);
    sub_1BCA7E0(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, v12, v13);
    byte_4B18ECF = 1;
  }
  v14 = sub_1BCAA2C(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, creator, logic, *(_QWORD *)&priority);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = creator,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)creator, v17, v18, v19, v20, v21, v22),
        *(_QWORD *)(v14 + 24) = logic,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)logic, v23, v24, v25, v26, v27, v28),
        v31 = *(_QWORD *)(v14 + 24),
        *(_DWORD *)(v14 + 32) = priority,
        !v31)
    || (v32 = *(_QWORD *)(v31 + 40)) == 0 )
  {
    sub_1BCAA3C(v15, v16);
  }
  v33 = *(System_Collections_Generic_List_T__o **)(v32 + 144);
  v34 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_AiNpcBattleServantData__bool__TypeInfo, v16, v29, v30);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v14,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           v33,
           (System_Func_T__bool__o *)v34,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
}


void __fastcall ReactTaskTargetNpc___c__DisplayClass1_0___ctor(
        ReactTaskTargetNpc___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ReactTaskTargetNpc___c__DisplayClass1_0___ExistTargetPriority_b__0(
        ReactTaskTargetNpc___c__DisplayClass1_0_o *this,
        AiNpcBattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1BCAA3C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}