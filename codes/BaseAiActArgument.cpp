void BaseAiActArgument___ctor(
        BaseAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        int32_t fromProcState,
        const MethodInfo *method)
{
  BaseAiActArgument_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields._AiActEnt_k__BackingField = aiActEnt;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields, (int32_t)aiActEnt, v9, v10);
  v8->fields._AiEnt_k__BackingField = aiEnt;
  v8 = (BaseAiActArgument_o *)((char *)v8 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)v8, (int32_t)aiEnt, v11, v12);
  LODWORD(v8->monitor) = fromProcState;
}


void BaseAiActArgument__InitCommonTask(
        BaseAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  ;
}


BattleLogicTask_o *BaseAiActArgument__MakeTask(
        BaseAiActArgument_o *this,
        BattleLogicBaseAi_o *logicAi,
        int32_t actType,
        const MethodInfo *method)
{
  BaseAiActBattleLogicTask_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4CB9354 & 1) == 0 )
  {
    sub_1C6BA08(&BaseAiActBattleLogicTask_TypeInfo);
    byte_4CB9354 = 1;
  }
  v7 = (BaseAiActBattleLogicTask_o *)sub_1C6BC54(BaseAiActBattleLogicTask_TypeInfo);
  BaseAiActBattleLogicTask___ctor(v7, actType, 0);
  return BaseAiActArgument__MakeTask_46985388(this, v7, logicAi, v8);
}


BattleLogicTask_o *BaseAiActArgument__MakeTask_46985388(
        BaseAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        BattleLogicBaseAi_o *logicAi,
        const MethodInfo *method)
{
  BaseAiActArgument_o *v5; // x20
  int32_t v6; // w21

  if ( !logicAi
    || (v5 = this,
        v6 = ((__int64 (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))logicAi->klass->vtable._4_get_ActorType.methodPtr)(
               logicAi,
               logicAi->klass->vtable._4_get_ActorType.method),
        this = (BaseAiActArgument_o *)((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))v5->klass->vtable._4_get_UniqueId.methodPtr)(
                                        v5,
                                        v5->klass->vtable._4_get_UniqueId.method),
        !task) )
  {
    sub_1C6BC60(this, task);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)task, v6, (int32_t)this, 0);
  ((void (__fastcall *)(BaseAiActBattleLogicTask_o *, struct AiActEntity_o *, struct AiBaseEntity_o *, const MethodInfo *))task->klass->vtable._11_Init.methodPtr)(
    task,
    v5->fields._AiActEnt_k__BackingField,
    v5->fields._AiEnt_k__BackingField,
    task->klass->vtable._11_Init.method);
  ((void (__fastcall *)(BaseAiActArgument_o *, BaseAiActBattleLogicTask_o *, const MethodInfo *))v5->klass->vtable._5_InitCommonTask.methodPtr)(
    v5,
    task,
    v5->klass->vtable._5_InitCommonTask.method);
  return (BattleLogicTask_o *)task;
}


AiActEntity_o *BaseAiActArgument__get_AiActEnt(BaseAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._AiActEnt_k__BackingField;
}


AiBaseEntity_o *BaseAiActArgument__get_AiEnt(BaseAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._AiEnt_k__BackingField;
}


int32_t BaseAiActArgument__get_FromProcState(BaseAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._FromProcState_k__BackingField;
}


int32_t BaseAiActArgument__get_UniqueId(BaseAiActArgument_o *this, const MethodInfo *method)
{
  return -1;
}


void BaseAiActArgument__set_AiActEnt(BaseAiActArgument_o *this, AiActEntity_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AiActEnt_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BaseAiActArgument__set_AiEnt(BaseAiActArgument_o *this, AiBaseEntity_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AiEnt_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._AiEnt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BaseAiActArgument__set_FromProcState(BaseAiActArgument_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._FromProcState_k__BackingField = value;
}