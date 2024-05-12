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
  __int64 v20; // x1
  struct AiNpcBattleServantData_o *v21; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.logicNpcAi,
    (System_Int32_array **)logicNpcAi,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.arg = arg;
  sub_B77560(
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
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass[1]._1.image),
        (v21 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_B7769C(Npc_k__BackingField, v20);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v21->fields.uniqueId, 0LL);
}


BattleLogicTask_array *__fastcall NpcAiCheckTask__MakeActionTask(
        NpcAiCheckTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x1
  BattleLogicNpcAi_o *logicNpcAi; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x21

  if ( (byte_438A219 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleLogicTask___ctor__);
    sub_B775C4(&System_Action_BattleLogicTask__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B775C4(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__);
    byte_438A219 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v4,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          0LL),
        (logicNpcAi = (BattleLogicNpcAi_o *)this->fields.arg) == 0LL)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          (NpcAiCheckTask_Argument_o *)logicNpcAi,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v4,
          0LL),
        v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleLogicTask__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v7,
          (Il2CppObject *)this,
          Method_NpcAiCheckTask__MakeActionTask_b__4_0__,
          (const MethodInfo_26A0868 *)Method_System_Action_BattleLogicTask___ctor__),
        !v4) )
  {
    sub_B7769C(logicNpcAi, v5);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4,
    (System_Action_T__o *)v7,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields._AiTimingPriority_k__BackingField, 0LL);
}


void __fastcall NpcAiCheckTask_Argument___ctor(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        System_Collections_Generic_List_AiNpcBattleServantData__o *npcList,
        int32_t index,
        const MethodInfo *method)
{
  struct AiNpcBattleServantData_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v18; // w22
  NpcAiCheckTask_Argument_o *v19; // x23
  const MethodInfo *v20; // x4
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_438A09C & 1) == 0 )
  {
    sub_B775C4(&NpcAiCheckTask_Argument_TypeInfo);
    sub_B775C4(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
    sub_B775C4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    byte_438A09C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  v9 = (struct AiNpcBattleServantData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                            (System_Collections_Generic_List_T__o *)npcList,
                                            index,
                                            0LL,
                                            (const MethodInfo_1C6842C *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Npc_k__BackingField,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_B7769C(Npc_k__BackingField, v16);
  v18 = index + 1;
  if ( v18 < npcList->fields._size )
  {
    v19 = (NpcAiCheckTask_Argument_o *)sub_B77694(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v19, state, npcList, v18, v20);
    this->fields.nextNpcArg = v19;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.nextNpcArg,
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
}


void __fastcall NpcAiCheckTask_Argument__AddNextAiCheckTask(
        NpcAiCheckTask_Argument_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        const MethodInfo *method)
{
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v8; // x1
  struct AiNpcBattleServantData_o *v9; // x8
  NpcAiCheckTask_o *v10; // x22

  if ( (byte_438A09D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B775C4(&NpcAiCheckTask_TypeInfo);
    byte_438A09D = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v8 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v8;
  if ( !Npc_k__BackingField )
    goto LABEL_16;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v8, 0LL) )
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
    v9 = this->fields._Npc_k__BackingField;
    if ( !v9 )
      goto LABEL_16;
    if ( !v9->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_16;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          logicNpcAi,
                                                          v9->fields.uniqueId,
                                                          0LL);
      if ( !taskList )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Npc_k__BackingField,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  this = this->fields.nextNpcArg;
  if ( this )
  {
LABEL_13:
    v10 = (NpcAiCheckTask_o *)sub_B77694(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v10, logicNpcAi, this, 0LL);
    if ( taskList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      return;
    }
LABEL_16:
    sub_B7769C(Npc_k__BackingField, v8);
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
  sub_B77560(
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