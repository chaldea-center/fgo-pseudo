void __fastcall NpcServantAiActArgument___ctor(
        NpcServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        BattleLogicNpcAi_o *npcAi,
        const MethodInfo *method)
{
  ServantAiActArgument___ctor((ServantAiActArgument_o *)this, aiActEnt, aiEnt, svtData, 0, 0LL);
  this->fields._NpcAi_k__BackingField = npcAi;
  sub_B0D840(&this->fields._NpcAi_k__BackingField, npcAi);
}


void __fastcall NpcServantAiActArgument__InitCommonTask(
        NpcServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x0
  BattleLogicNpcAi_o *NpcAi_k__BackingField; // x22
  struct BattleActionData_array *v7; // x20
  __int64 LoadNpcPreStepInAction; // x0
  BattleActionData_o *v9; // x22
  long double v10; // q0
  BattleLogicNpcAi_o *v11; // x22
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v13; // w21
  BattleActionData_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4211FF9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData___TypeInfo, task);
    byte_4211FF9 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, 0LL);
  v5 = sub_B0D8BC(BattleActionData___TypeInfo, 2LL);
  NpcAi_k__BackingField = this->fields._NpcAi_k__BackingField;
  v7 = (struct BattleActionData_array *)v5;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr);
  if ( !NpcAi_k__BackingField )
    goto LABEL_15;
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
                                      NpcAi_k__BackingField,
                                      LoadNpcPreStepInAction,
                                      0LL);
  if ( !v7 )
    goto LABEL_15;
  v9 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_B0D964(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      v16 = sub_B0D99C();
      sub_B0D948(v16, 0LL);
    }
  }
  if ( !v7->max_length )
    goto LABEL_16;
  v7->m_Items[0] = v9;
  *(__n128 *)&v10 = sub_B0D840(v7->m_Items, v9);
  v11 = this->fields._NpcAi_k__BackingField;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr,
                             v10);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v13 = LoadNpcPreStepInAction,
        LoadNpcPreStepInAction = AiBaseEntity__IsForcedStepInSpeedAnyTime(AiEnt_k__BackingField, 0LL),
        !v11) )
  {
LABEL_15:
    sub_B0D97C(LoadNpcPreStepInAction);
  }
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeStepInAction(v11, v13, LoadNpcPreStepInAction & 1, 0LL);
  v14 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_B0D964(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( v7->max_length <= 1 )
  {
LABEL_16:
    v15 = sub_B0D9A8(LoadNpcPreStepInAction);
    sub_B0D948(v15, 0LL);
  }
  v7->m_Items[1] = v14;
  sub_B0D840(&v7->m_Items[1], v14);
  if ( !task )
    goto LABEL_15;
  task->fields.interruptActions = v7;
  sub_B0D840(&task->fields.interruptActions, v7);
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
  this->fields._NpcAi_k__BackingField = value;
  sub_B0D840(&this->fields._NpcAi_k__BackingField, value);
}