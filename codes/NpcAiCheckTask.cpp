void __fastcall NpcAiCheckTask___ctor(
        NpcAiCheckTask_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        NpcAiCheckTask_Argument_o *arg,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int32_t v20; // w0
  struct AiNpcBattleServantData_o *v21; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.logicNpcAi,
    (System_Int32_array **)logicNpcAi,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.arg = arg;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.arg,
    (System_Int32_array **)arg,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0LL
    || (v20 = ((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                Npc_k__BackingField,
                Npc_k__BackingField->klass[1]._1.image),
        (v21 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_B170D4();
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, v20, v21->fields.uniqueId, 0LL);
}


BattleLogicTask_array *__fastcall NpcAiCheckTask__MakeActionTask(
        NpcAiCheckTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  BattleLogicNpcAi_o *logicNpcAi; // x0
  NpcAiCheckTask_Argument_o *arg; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x21

  if ( (byte_40F93A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleLogicTask___ctor__, logic);
    sub_B16FFC(&System_Action_BattleLogicTask__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_B16FFC(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__, v11);
    byte_40F93A7 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  logic,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v12,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          0LL),
        (arg = this->fields.arg) == 0LL)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          arg,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v12,
          0LL),
        v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BattleLogicTask__TypeInfo,
                                                                                     v15,
                                                                                     v16,
                                                                                     v17,
                                                                                     v18),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v19,
          (Il2CppObject *)this,
          Method_NpcAiCheckTask__MakeActionTask_b__4_0__,
          (const MethodInfo_24B7310 *)Method_System_Action_BattleLogicTask___ctor__),
        !v12) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v12,
    (System_Action_T__o *)v19,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w22
  NpcAiCheckTask_Argument_o *v24; // x23
  const MethodInfo *v25; // x4
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40F835D & 1) == 0 )
  {
    sub_B16FFC(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v10);
    byte_40F835D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  v11 = (struct AiNpcBattleServantData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                             (System_Collections_Generic_List_T__o *)npcList,
                                             index,
                                             0LL,
                                             (const MethodInfo_18B822C *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Npc_k__BackingField,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_B170D4();
  v23 = index + 1;
  if ( v23 < npcList->fields._size )
  {
    v24 = (NpcAiCheckTask_Argument_o *)sub_B170CC(NpcAiCheckTask_Argument_TypeInfo, v19, v20, v21, v22);
    NpcAiCheckTask_Argument___ctor(v24, state, npcList, v23, v25);
    this->fields.nextNpcArg = v24;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.nextNpcArg,
      (System_Int32_array **)v24,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
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
  int32_t v9; // w1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  AiNpcBattleServantData_o *v14; // x0
  struct AiNpcBattleServantData_o *v15; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *BackStepTask; // x0
  NpcAiCheckTask_o *v17; // x22

  if ( (byte_40F835E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, logicNpcAi);
    sub_B16FFC(&NpcAiCheckTask_TypeInfo, v7);
    byte_40F835E = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v9 = this->fields._AiStateIndex_k__BackingField + 1;
  this->fields._AiStateIndex_k__BackingField = v9;
  if ( !Npc_k__BackingField )
    goto LABEL_16;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v9, 0LL) )
    goto LABEL_13;
  v14 = this->fields._Npc_k__BackingField;
  if ( !v14 )
    goto LABEL_16;
  if ( AiNpcBattleServantData__RemoveCheckAiProcState(v14, this->fields._State_k__BackingField, 0LL) )
  {
    v15 = this->fields._Npc_k__BackingField;
    if ( !v15 )
      goto LABEL_16;
    if ( !v15->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_16;
      BackStepTask = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                                              logicNpcAi,
                                                                              v15->fields.uniqueId,
                                                                              0LL);
      if ( !taskList )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        BackStepTask,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  this = this->fields.nextNpcArg;
  if ( this )
  {
LABEL_13:
    v17 = (NpcAiCheckTask_o *)sub_B170CC(NpcAiCheckTask_TypeInfo, v10, v11, v12, v13);
    NpcAiCheckTask___ctor(v17, logicNpcAi, this, 0LL);
    if ( taskList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      return;
    }
LABEL_16:
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Npc_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Npc_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NpcAiCheckTask_Argument__set_State(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}