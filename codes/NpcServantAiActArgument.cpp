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
  sub_B2C2F8(&this->fields._NpcAi_k__BackingField, npcAi);
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
  __int64 v9; // x1
  BattleActionData_o *v10; // x22
  long double v11; // q0
  BattleLogicNpcAi_o *v12; // x22
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v14; // w21
  BattleActionData_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_418510F & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData___TypeInfo, task);
    byte_418510F = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, 0LL);
  v5 = sub_B2C374(BattleActionData___TypeInfo, 2LL);
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
  v10 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_B2C41C(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      v17 = sub_B2C454();
      sub_B2C400(v17, 0LL);
    }
  }
  if ( !v7->max_length )
    goto LABEL_16;
  v7->m_Items[0] = v10;
  *(__n128 *)&v11 = sub_B2C2F8(v7->m_Items, v10);
  v12 = this->fields._NpcAi_k__BackingField;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr,
                             v11);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v14 = LoadNpcPreStepInAction,
        LoadNpcPreStepInAction = AiBaseEntity__IsForcedStepInSpeedAnyTime(AiEnt_k__BackingField, 0LL),
        !v12) )
  {
LABEL_15:
    sub_B2C434(LoadNpcPreStepInAction, v9);
  }
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeStepInAction(v12, v14, LoadNpcPreStepInAction & 1, 0LL);
  v15 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_B2C41C(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( v7->max_length <= 1 )
  {
LABEL_16:
    v16 = sub_B2C460(LoadNpcPreStepInAction);
    sub_B2C400(v16, 0LL);
  }
  v7->m_Items[1] = v15;
  sub_B2C2F8(&v7->m_Items[1], v15);
  if ( !task )
    goto LABEL_15;
  task->fields.interruptActions = v7;
  sub_B2C2F8(&task->fields.interruptActions, v7);
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
  sub_B2C2F8(&this->fields._NpcAi_k__BackingField, value);
}