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
  sub_B5D560(&this->fields._NpcAi_k__BackingField);
}


void __fastcall NpcServantAiActArgument__InitCommonTask(
        NpcServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  BattleLogicNpcAi_o *NpcAi_k__BackingField; // x22
  struct BattleActionData_array *v8; // x20
  __int64 LoadNpcPreStepInAction; // x0
  __int64 v10; // x1
  BattleActionData_o *v11; // x22
  long double v12; // q0
  BattleLogicNpcAi_o *v13; // x22
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v15; // w21
  BattleActionData_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_42E6296 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData___TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    byte_42E6296 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, 0LL);
  v6 = sub_B5D5DC(BattleActionData___TypeInfo, 2LL);
  NpcAi_k__BackingField = this->fields._NpcAi_k__BackingField;
  v8 = (struct BattleActionData_array *)v6;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr);
  if ( !NpcAi_k__BackingField )
    goto LABEL_15;
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
                                      NpcAi_k__BackingField,
                                      LoadNpcPreStepInAction,
                                      0LL);
  if ( !v8 )
    goto LABEL_15;
  v11 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_B5D684(LoadNpcPreStepInAction, v8->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      v18 = sub_B5D6BC();
      sub_B5D668(v18, 0LL);
    }
  }
  if ( !v8->max_length )
    goto LABEL_16;
  v8->m_Items[0] = v11;
  *(__n128 *)&v12 = sub_B5D560(v8->m_Items);
  v13 = this->fields._NpcAi_k__BackingField;
  LoadNpcPreStepInAction = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_get_UniqueId.method)(
                             this,
                             this->klass->vtable._5_InitCommonTask.methodPtr,
                             v12);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v15 = LoadNpcPreStepInAction,
        LoadNpcPreStepInAction = AiBaseEntity__IsForcedStepInSpeedAnyTime(AiEnt_k__BackingField, 0LL),
        !v13) )
  {
LABEL_15:
    sub_B5D69C(LoadNpcPreStepInAction, v10);
  }
  LoadNpcPreStepInAction = (__int64)BattleLogicNpcAi__MakeStepInAction(v13, v15, LoadNpcPreStepInAction & 1, 0LL);
  v16 = (BattleActionData_o *)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = sub_B5D684(LoadNpcPreStepInAction, v8->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( v8->max_length <= 1 )
  {
LABEL_16:
    v17 = sub_B5D6C8(LoadNpcPreStepInAction);
    sub_B5D668(v17, 0LL);
  }
  v8->m_Items[1] = v16;
  sub_B5D560(&v8->m_Items[1]);
  if ( !task )
    goto LABEL_15;
  task->fields.interruptActions = v8;
  sub_B5D560(&task->fields.interruptActions);
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
  sub_B5D560(&this->fields._NpcAi_k__BackingField);
}