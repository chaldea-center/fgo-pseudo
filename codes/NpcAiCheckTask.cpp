void __fastcall NpcAiCheckTask___ctor(
        NpcAiCheckTask_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        NpcAiCheckTask_Argument_o *arg,
        const MethodInfo *method)
{
  struct AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v8; // x1
  long double v9; // q0
  struct AiNpcBattleServantData_o *v10; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_B2C2F8(&this->fields.logicNpcAi, logicNpcAi);
  this->fields.arg = arg;
  *(__n128 *)&v9 = sub_B2C2F8(&this->fields.arg, arg);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0LL
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *, long double))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass[1]._1.image,
                                                                   v9),
        (v10 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_B2C434(Npc_k__BackingField, v8);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v10->fields.uniqueId, 0LL);
}


BattleLogicTask_array *__fastcall NpcAiCheckTask__MakeActionTask(
        NpcAiCheckTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x1
  BattleLogicNpcAi_o *logicNpcAi; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x21

  if ( (byte_41850EE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleLogicTask___ctor__, logic);
    sub_B2C35C(&System_Action_BattleLogicTask__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B2C35C(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__, v9);
    byte_41850EE = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v10,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          0LL),
        (logicNpcAi = (BattleLogicNpcAi_o *)this->fields.arg) == 0LL)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          (NpcAiCheckTask_Argument_o *)logicNpcAi,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v10,
          0LL),
        v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleLogicTask__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v13,
          (Il2CppObject *)this,
          Method_NpcAiCheckTask__MakeActionTask_b__4_0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BattleLogicTask___ctor__),
        !v10) )
  {
    sub_B2C434(logicNpcAi, v11);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v10,
    (System_Action_T__o *)v13,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields._AiTimingPriority_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpcAiCheckTask_Argument___ctor(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        System_Collections_Generic_List_AiNpcBattleServantData__o *npcList,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  struct AiNpcBattleServantData_o *v11; // x0
  __int64 v12; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v14; // w22
  NpcAiCheckTask_Argument_o *v15; // x23
  const MethodInfo *v16; // x4

  if ( (byte_4185273 & 1) == 0 )
  {
    sub_B2C35C(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v10);
    byte_4185273 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  v11 = (struct AiNpcBattleServantData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                             (System_Collections_Generic_List_T__o *)npcList,
                                             index,
                                             0LL,
                                             (const MethodInfo_1728994 *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = v11;
  sub_B2C2F8(&this->fields._Npc_k__BackingField, v11);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_B2C434(Npc_k__BackingField, v12);
  v14 = index + 1;
  if ( v14 < npcList->fields._size )
  {
    v15 = (NpcAiCheckTask_Argument_o *)sub_B2C42C(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v15, state, npcList, v14, v16);
    this->fields.nextNpcArg = v15;
    sub_B2C2F8(&this->fields.nextNpcArg, v15);
  }
}


void __fastcall NpcAiCheckTask_Argument__AddNextAiCheckTask(
        NpcAiCheckTask_Argument_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v9; // x1
  struct AiNpcBattleServantData_o *v10; // x8
  NpcAiCheckTask_o *v11; // x22

  if ( (byte_4185274 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, logicNpcAi);
    sub_B2C35C(&NpcAiCheckTask_TypeInfo, v7);
    byte_4185274 = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v9 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v9;
  if ( !Npc_k__BackingField )
    goto LABEL_16;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v9, 0LL) )
    goto LABEL_13;
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField )
    goto LABEL_16;
  Npc_k__BackingField = (AiNpcBattleServantData_o *)AiNpcBattleServantData__RemoveCheckAiProcState(
                                                      Npc_k__BackingField,
                                                      this->fields._State_k__BackingField,
                                                      0LL);
  if ( ((unsigned __int8)Npc_k__BackingField & 1) != 0 )
  {
    v10 = this->fields._Npc_k__BackingField;
    if ( !v10 )
      goto LABEL_16;
    if ( !v10->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_16;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          logicNpcAi,
                                                          v10->fields.uniqueId,
                                                          0LL);
      if ( !taskList )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Npc_k__BackingField,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  this = this->fields.nextNpcArg;
  if ( this )
  {
LABEL_13:
    v11 = (NpcAiCheckTask_o *)sub_B2C42C(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v11, logicNpcAi, this, 0LL);
    if ( taskList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      return;
    }
LABEL_16:
    sub_B2C434(Npc_k__BackingField, v9);
  }
}


int32_t __fastcall NpcAiCheckTask_Argument__get_AiStateIndex(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._AiStateIndex_k__BackingField;
}


AiNpcBattleServantData_o *__fastcall NpcAiCheckTask_Argument__get_Npc(
        NpcAiCheckTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._Npc_k__BackingField;
}


int32_t __fastcall NpcAiCheckTask_Argument__get_State(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._State_k__BackingField;
}


void __fastcall NpcAiCheckTask_Argument__set_AiStateIndex(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AiStateIndex_k__BackingField = value;
}


void __fastcall NpcAiCheckTask_Argument__set_Npc(
        NpcAiCheckTask_Argument_o *this,
        AiNpcBattleServantData_o *value,
        const MethodInfo *method)
{
  this->fields._Npc_k__BackingField = value;
  sub_B2C2F8(&this->fields._Npc_k__BackingField, value);
}


void __fastcall NpcAiCheckTask_Argument__set_State(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}