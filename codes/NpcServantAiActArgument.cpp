void NpcServantAiActArgument___ctor(
        NpcServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        BattleLogicNpcAi_o *npcAi,
        int32_t fromProcState,
        const MethodInfo *method)
{
  NpcServantAiActArgument_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  v9 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, fromProcState, (const MethodInfo *)npcAi);
  v9->fields._SvtData_k__BackingField = svtData;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields._SvtData_k__BackingField, (int32_t)svtData, v10, v11);
  v9->fields._NpcAi_k__BackingField = npcAi;
  v9 = (NpcServantAiActArgument_o *)((char *)v9 + 56);
  LOBYTE(v9[-1].fields._NpcAi_k__BackingField) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)v9, (int32_t)npcAi, v12, v13);
}


void NpcServantAiActArgument__InitCommonTask(
        NpcServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x0
  BattleLogicNpcAi_o *NpcAi_k__BackingField; // x22
  BattleActionData_array *v7; // x20
  __int64 LoadNpcPreStepInAction; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleActionData_o *v11; // x22
  BattleLogicNpcAi_o *v12; // x22
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v14; // w21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleActionData_o *v17; // x21
  __int64 v18; // x0

  if ( (byte_4C3AA06 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData___TypeInfo);
    byte_4C3AA06 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, method);
  v5 = sub_1C32CC8(BattleActionData___TypeInfo, 2);
  NpcAi_k__BackingField = this->fields._NpcAi_k__BackingField;
  v7 = (BattleActionData_array *)v5;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, const MethodInfo *))this->klass->vtable._4_get_UniqueId.methodPtr)(
                             this,
                             this->klass->vtable._4_get_UniqueId.method);
  if ( !NpcAi_k__BackingField )
    goto LABEL_15;
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
                                      NpcAi_k__BackingField,
                                      LoadNpcPreStepInAction,
                                      0);
  if ( !v7 )
    goto LABEL_15;
  v11 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_1C32D5C(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      v18 = sub_1C32EA0(LoadNpcPreStepInAction);
      sub_1C32D48(v18, 0);
    }
  }
  if ( !LODWORD(v7->max_length) )
    goto LABEL_16;
  v7->m_Items[0] = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)v7->m_Items, (int32_t)v11, v9, v10);
  v12 = this->fields._NpcAi_k__BackingField;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, const MethodInfo *))this->klass->vtable._4_get_UniqueId.methodPtr)(
                             this,
                             this->klass->vtable._4_get_UniqueId.method);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v14 = LoadNpcPreStepInAction,
        LoadNpcPreStepInAction = AiBaseEntity__IsForcedStepInSpeedAnyTime(AiEnt_k__BackingField, 0),
        !v12) )
  {
LABEL_15:
    sub_1C32E7C(LoadNpcPreStepInAction);
  }
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeStepInAction(v12, v14, LoadNpcPreStepInAction & 1, 0);
  v17 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_1C32D5C(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( LODWORD(v7->max_length) <= 1 )
LABEL_16:
    sub_1C32E84(LoadNpcPreStepInAction);
  v7->m_Items[1] = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[1], (int32_t)v17, v15, v16);
  if ( !task )
    goto LABEL_15;
  BattleLogicTask__SetInterruptAction((BattleLogicTask_o *)task, v7, 0);
}


BattleLogicNpcAi_o *NpcServantAiActArgument__get_NpcAi(NpcServantAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._NpcAi_k__BackingField;
}


void NpcServantAiActArgument__set_NpcAi(
        NpcServantAiActArgument_o *this,
        BattleLogicNpcAi_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NpcAi_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._NpcAi_k__BackingField, (int32_t)value, (int32_t)method, v3);
}