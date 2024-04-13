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
  sub_B5D560(&this->fields.logicNpcAi);
  this->fields.arg = arg;
  *(__n128 *)&v9 = sub_B5D560(&this->fields.arg);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0LL
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *, long double))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass[1]._1.image,
                                                                   v9),
        (v10 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_B5D69C(Npc_k__BackingField, v8);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v10->fields.uniqueId, 0LL);
}


BattleLogicTask_array *__fastcall NpcAiCheckTask__MakeActionTask(
        NpcAiCheckTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 v24; // x1
  BattleLogicNpcAi_o *logicNpcAi; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x21

  if ( (byte_42E6275 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleLogicTask___ctor__, (_DWORD)logic, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleLogicTask__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__, v20, v21, v22);
    byte_42E6275 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v23,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          0LL),
        (logicNpcAi = (BattleLogicNpcAi_o *)this->fields.arg) == 0LL)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          (NpcAiCheckTask_Argument_o *)logicNpcAi,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v23,
          0LL),
        v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleLogicTask__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v26,
          (Il2CppObject *)this,
          Method_NpcAiCheckTask__MakeActionTask_b__4_0__,
          (const MethodInfo_258B320 *)Method_System_Action_BattleLogicTask___ctor__),
        !v23) )
  {
    sub_B5D69C(logicNpcAi, v24);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v23,
    (System_Action_T__o *)v26,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v17; // w22
  NpcAiCheckTask_Argument_o *v18; // x23
  const MethodInfo *v19; // x4

  if ( (byte_42E5A66 & 1) == 0 )
  {
    sub_B5D5C4(&NpcAiCheckTask_Argument_TypeInfo, state, (_DWORD)npcList, *(_QWORD *)&index);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v12, v13, v14);
    byte_42E5A66 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                                                           (System_Collections_Generic_List_T__o *)npcList,
                                                                           index,
                                                                           0LL,
                                                                           (const MethodInfo_1AD901C *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  sub_B5D560(&this->fields._Npc_k__BackingField);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_B5D69C(Npc_k__BackingField, v15);
  v17 = index + 1;
  if ( v17 < npcList->fields._size )
  {
    v18 = (NpcAiCheckTask_Argument_o *)sub_B5D694(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v18, state, npcList, v17, v19);
    this->fields.nextNpcArg = v18;
    sub_B5D560(&this->fields.nextNpcArg);
  }
}


void __fastcall NpcAiCheckTask_Argument__AddNextAiCheckTask(
        NpcAiCheckTask_Argument_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v11; // x1
  struct AiNpcBattleServantData_o *v12; // x8
  NpcAiCheckTask_o *v13; // x22

  if ( (byte_42E5A67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicTask__Add__,
      (_DWORD)logicNpcAi,
      (_DWORD)taskList,
      method);
    sub_B5D5C4(&NpcAiCheckTask_TypeInfo, v7, v8, v9);
    byte_42E5A67 = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v11 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v11;
  if ( !Npc_k__BackingField )
    goto LABEL_16;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v11, 0LL) )
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
    v12 = this->fields._Npc_k__BackingField;
    if ( !v12 )
      goto LABEL_16;
    if ( !v12->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_16;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          logicNpcAi,
                                                          v12->fields.uniqueId,
                                                          0LL);
      if ( !taskList )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Npc_k__BackingField,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  this = this->fields.nextNpcArg;
  if ( this )
  {
LABEL_13:
    v13 = (NpcAiCheckTask_o *)sub_B5D694(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v13, logicNpcAi, this, 0LL);
    if ( taskList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      return;
    }
LABEL_16:
    sub_B5D69C(Npc_k__BackingField, v11);
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
  sub_B5D560(&this->fields._Npc_k__BackingField);
}


void __fastcall NpcAiCheckTask_Argument__set_State(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}