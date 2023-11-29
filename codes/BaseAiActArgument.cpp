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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)aiActEnt, v7, v8, v9, v10, v11, v12);
  this->fields._AiEnt_k__BackingField = aiEnt;
  sub_B16F98(
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


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BaseAiActArgument__MakeTask(
        BaseAiActArgument_o *this,
        BattleLogicBaseAi_o *logicAi,
        int32_t actType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleLogicTask_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_40F6EEA & 1) == 0 )
  {
    sub_B16FFC(&BaseAiActBattleLogicTask_TypeInfo, logicAi);
    byte_40F6EEA = 1;
  }
  v8 = (BattleLogicTask_o *)sub_B170CC(BaseAiActBattleLogicTask_TypeInfo, logicAi, *(_QWORD *)&actType, method, v4);
  BattleLogicTask___ctor(v8, 0LL);
  v8->fields.actiontype = actType;
  return BaseAiActArgument__MakeTask_19245568(this, (BaseAiActBattleLogicTask_o *)v8, logicAi, v9);
}


BattleLogicTask_o *__fastcall BaseAiActArgument__MakeTask_19245568(
        BaseAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        BattleLogicBaseAi_o *logicAi,
        const MethodInfo *method)
{
  int32_t v6; // w21
  int32_t v7; // w0

  if ( !logicAi
    || (v6 = ((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))logicAi->klass->vtable._4_get_ActorType.method)(
               logicAi,
               logicAi->klass->vtable._5_get_PartySvtIds.methodPtr),
        v7 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
               this,
               this->klass->vtable._5_InitCommonTask.methodPtr),
        !task) )
  {
    sub_B170D4();
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)task, v6, v7, 0LL);
  ((void (__fastcall *)(BaseAiActBattleLogicTask_o *, struct AiActEntity_o *, struct AiBaseEntity_o *, void *))task->klass->vtable._8_Init.method)(
    task,
    this->fields._AiActEnt_k__BackingField,
    this->fields._AiEnt_k__BackingField,
    task->klass[1]._1.image);
  ((void (__fastcall *)(BaseAiActArgument_o *, BaseAiActBattleLogicTask_o *, void *))this->klass->vtable._5_InitCommonTask.method)(
    this,
    task,
    this->klass[1]._1.image);
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
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._AiEnt_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}