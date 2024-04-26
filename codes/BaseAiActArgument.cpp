void __fastcall BaseAiActArgument___ctor(
        BaseAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
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

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._AiActEnt_k__BackingField = aiActEnt;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)aiActEnt, v7, v8, v9, v10, v11, v12);
  this->fields._AiEnt_k__BackingField = aiEnt;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._AiEnt_k__BackingField,
    (System_Int32_array **)aiEnt,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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

  if ( (byte_434F795 & 1) == 0 )
  {
    sub_B70694(&BaseAiActBattleLogicTask_TypeInfo);
    byte_434F795 = 1;
  }
  v7 = (BattleLogicTask_o *)sub_B70764(BaseAiActBattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  v7->fields.actiontype = actType;
  return BaseAiActArgument__MakeTask_20844156(this, (BaseAiActBattleLogicTask_o *)v7, logicAi, v8);
}


BattleLogicTask_o *__fastcall BaseAiActArgument__MakeTask_20844156(
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
    sub_B7076C(this, task);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AiActEnt_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BaseAiActArgument__set_AiEnt(
        BaseAiActArgument_o *this,
        AiBaseEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AiEnt_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._AiEnt_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}