void __fastcall NpcServantAiActArgument___ctor(
        NpcServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        BattleLogicNpcAi_o *npcAi,
        int32_t fromProcState,
        const MethodInfo *method)
{
  NpcServantAiActArgument_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  v9 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, fromProcState, (const MethodInfo *)npcAi);
  v9->fields._SvtData_k__BackingField = svtData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v9->fields._SvtData_k__BackingField,
    (int64_t)svtData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v9->fields._NpcAi_k__BackingField = npcAi;
  v9 = (NpcServantAiActArgument_o *)((char *)v9 + 56);
  LOBYTE(v9[-1].fields._NpcAi_k__BackingField) = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)v9, (int64_t)npcAi, v16, v17, v18, v19, v20, v21);
}


void __fastcall NpcServantAiActArgument__InitCommonTask(
        NpcServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x0
  BattleLogicNpcAi_o *NpcAi_k__BackingField; // x22
  struct BattleActionData_array *v7; // x20
  int64_t LoadNpcPreStepInAction; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x22
  BattleLogicNpcAi_o *v17; // x22
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v19; // w21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x0

  if ( (byte_4BDF201 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData___TypeInfo);
    byte_4BDF201 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, method);
  v5 = sub_1C21EE0(BattleActionData___TypeInfo, 2LL);
  NpcAi_k__BackingField = this->fields._NpcAi_k__BackingField;
  v7 = (struct BattleActionData_array *)v5;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr);
  if ( !NpcAi_k__BackingField )
    goto LABEL_15;
  LoadNpcPreStepInAction = (int64_t)BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
                                      NpcAi_k__BackingField,
                                      LoadNpcPreStepInAction,
                                      0LL);
  if ( !v7 )
    goto LABEL_15;
  v16 = LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_1C21F74(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      v33 = sub_1C220B8(LoadNpcPreStepInAction);
      sub_1C21F60(v33, 0LL);
    }
  }
  if ( !v7->max_length )
    goto LABEL_16;
  v7->m_Items[0] = (BattleActionData_o *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v17 = this->fields._NpcAi_k__BackingField;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v19 = LoadNpcPreStepInAction,
        LoadNpcPreStepInAction = AiBaseEntity__IsForcedStepInSpeedAnyTime(AiEnt_k__BackingField, 0LL),
        !v17) )
  {
LABEL_15:
    sub_1C22094(LoadNpcPreStepInAction, v9);
  }
  LoadNpcPreStepInAction = (int64_t)BattleLogicNpcAi__MakeStepInAction(v17, v19, LoadNpcPreStepInAction & 1, 0LL);
  v26 = LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_1C21F74(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( v7->max_length <= 1 )
LABEL_16:
    sub_1C2209C(LoadNpcPreStepInAction, v9);
  v7->m_Items[1] = (BattleActionData_o *)v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  if ( !task )
    goto LABEL_15;
  task->fields.interruptActions = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&task->fields.interruptActions, (int64_t)v7, v27, v28, v29, v30, v31, v32);
}


BattleLogicNpcAi_o *__fastcall NpcServantAiActArgument__get_NpcAi(
        NpcServantAiActArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._NpcAi_k__BackingField;
}


void __fastcall NpcServantAiActArgument__set_NpcAi(
        NpcServantAiActArgument_o *this,
        BattleLogicNpcAi_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._NpcAi_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._NpcAi_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}