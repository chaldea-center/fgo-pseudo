void __fastcall BaseAiActArgument___ctor(
        BaseAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._AiActEnt_k__BackingField = aiActEnt;
  sub_B2C2F8(&this->fields, aiActEnt);
  this->fields._AiEnt_k__BackingField = aiEnt;
  sub_B2C2F8(&this->fields._AiEnt_k__BackingField, aiEnt);
}


void __fastcall BaseAiActArgument__InitCommonTask(
        BaseAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  ;
}


BattleLogicTask_o *__fastcall BaseAiActArgument__MakeTask(
        BaseAiActArgument_o *this,
        BattleLogicBaseAi_o *logicAi,
        int32_t actType,
        const MethodInfo *method)
{
  BattleLogicTask_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_41849EF & 1) == 0 )
  {
    sub_B2C35C(&BaseAiActBattleLogicTask_TypeInfo, logicAi);
    byte_41849EF = 1;
  }
  v7 = (BattleLogicTask_o *)sub_B2C42C(BaseAiActBattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  v7->fields.actiontype = actType;
  return BaseAiActArgument__MakeTask_19201872(this, (BaseAiActBattleLogicTask_o *)v7, logicAi, v8);
}


BattleLogicTask_o *__fastcall BaseAiActArgument__MakeTask_19201872(
        BaseAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        BattleLogicBaseAi_o *logicAi,
        const MethodInfo *method)
{
  BaseAiActArgument_o *v5; // x20
  int32_t v6; // w21

  if ( !logicAi
    || (v5 = this,
        v6 = ((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))logicAi->klass->vtable._4_get_ActorType.method)(
               logicAi,
               logicAi->klass->vtable._5_get_PartySvtIds.methodPtr),
        this = (BaseAiActArgument_o *)((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))v5->klass->vtable._4_get_UniqueId.method)(
                                        v5,
                                        v5->klass->vtable._5_InitCommonTask.methodPtr),
        !task) )
  {
    sub_B2C434(this, task);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)task, v6, (int32_t)this, 0LL);
  ((void (__fastcall *)(BaseAiActBattleLogicTask_o *, struct AiActEntity_o *, struct AiBaseEntity_o *, void *))task->klass->vtable._8_Init.method)(
    task,
    v5->fields._AiActEnt_k__BackingField,
    v5->fields._AiEnt_k__BackingField,
    task->klass[1]._1.image);
  ((void (__fastcall *)(BaseAiActArgument_o *, BaseAiActBattleLogicTask_o *, void *))v5->klass->vtable._5_InitCommonTask.method)(
    v5,
    task,
    v5->klass[1]._1.image);
  return (BattleLogicTask_o *)task;
}


AiActEntity_o *__fastcall BaseAiActArgument__get_AiActEnt(BaseAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._AiActEnt_k__BackingField;
}


AiBaseEntity_o *__fastcall BaseAiActArgument__get_AiEnt(BaseAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._AiEnt_k__BackingField;
}


int32_t __fastcall BaseAiActArgument__get_UniqueId(BaseAiActArgument_o *this, const MethodInfo *method)
{
  return -1;
}


void __fastcall BaseAiActArgument__set_AiActEnt(
        BaseAiActArgument_o *this,
        AiActEntity_o *value,
        const MethodInfo *method)
{
  this->fields._AiActEnt_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
}


void __fastcall BaseAiActArgument__set_AiEnt(
        BaseAiActArgument_o *this,
        AiBaseEntity_o *value,
        const MethodInfo *method)
{
  this->fields._AiEnt_k__BackingField = value;
  sub_B2C2F8(&this->fields._AiEnt_k__BackingField, value);
}