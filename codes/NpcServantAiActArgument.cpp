void __fastcall NpcServantAiActArgument___ctor(
        NpcServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        BattleLogicNpcAi_o *npcAi,
        const MethodInfo *method)
{
  NpcServantAiActArgument_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  v8 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, (const MethodInfo *)svtData);
  v8->fields._SvtData_k__BackingField = svtData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v8->fields._SvtData_k__BackingField, (int32_t)svtData, v9, v10);
  v8->fields._NpcAi_k__BackingField = npcAi;
  v8 = (NpcServantAiActArgument_o *)((char *)v8 + 48);
  LOBYTE(v8[-1].fields._NpcAi_k__BackingField) = 0;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v8, (int32_t)npcAi, v11, v12);
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
  int32_t v10; // w2
  int32_t v11; // w3
  BattleActionData_o *v12; // x22
  BattleLogicNpcAi_o *v13; // x22
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v15; // w21
  int32_t v16; // w2
  int32_t v17; // w3
  BattleActionData_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x0

  if ( (byte_4A729E8 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData___TypeInfo, task);
    byte_4A729E8 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, method);
  v5 = sub_1B900B8(BattleActionData___TypeInfo, 2LL);
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
  v12 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_1B9014C(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      v21 = sub_1B90290(LoadNpcPreStepInAction);
      sub_1B90138(v21, 0LL);
    }
  }
  if ( !v7->max_length )
    goto LABEL_16;
  v7->m_Items[0] = v12;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)v12, v10, v11);
  v13 = this->fields._NpcAi_k__BackingField;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v15 = LoadNpcPreStepInAction,
        LoadNpcPreStepInAction = AiBaseEntity__IsForcedStepInSpeedAnyTime(AiEnt_k__BackingField, 0LL),
        !v13) )
  {
LABEL_15:
    sub_1B9026C(LoadNpcPreStepInAction, v9);
  }
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeStepInAction(v13, v15, LoadNpcPreStepInAction & 1, 0LL);
  v18 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_1B9014C(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( v7->max_length <= 1 )
LABEL_16:
    sub_1B90274(LoadNpcPreStepInAction, v9);
  v7->m_Items[1] = v18;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v7->m_Items[1], (int32_t)v18, v16, v17);
  if ( !task )
    goto LABEL_15;
  task->fields.interruptActions = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&task->fields.interruptActions, (int32_t)v7, v19, v20);
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

  this->fields._NpcAi_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._NpcAi_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}