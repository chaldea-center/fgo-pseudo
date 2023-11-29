void __fastcall ServantAiActArgument___ctor(
        ServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        bool isNoMessage,
        const MethodInfo *method)
{
  ServantAiActArgument_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, 0LL);
  v8->fields._SvtData_k__BackingField = svtData;
  v8 = (ServantAiActArgument_o *)((char *)v8 + 32);
  sub_B16F98((BattleServantConfConponent_o *)v8, (System_Int32_array **)svtData, v9, v10, v11, v12, v13, v14);
  LOBYTE(v8->monitor) = isNoMessage;
}


void __fastcall ServantAiActArgument__InitCommonTask(
        ServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct AiBaseEntity_o *AiEnt_k__BackingField; // x8
  struct System_String_o *infoText; // x1
  AiBaseEntity_o *v12; // x0

  if ( !this->fields._IsNoMessage_k__BackingField )
  {
    AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
    if ( !AiEnt_k__BackingField || !task )
      goto LABEL_10;
    infoText = AiEnt_k__BackingField->fields.infoText;
    task->fields.motionMessage = infoText;
    sub_B16F98(
      (BattleServantConfConponent_o *)&task->fields.motionMessage,
      (System_Int32_array **)infoText,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  v12 = this->fields._AiEnt_k__BackingField;
  if ( !v12 )
    goto LABEL_10;
  if ( !AiBaseEntity__IsForcedActionSpeedAnyTime(v12, 0LL) )
    return;
  if ( !task )
LABEL_10:
    sub_B170D4();
  task->fields.isForcedSpeedOne = 1;
}


bool __fastcall ServantAiActArgument__get_IsNoMessage(ServantAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._IsNoMessage_k__BackingField;
}


BattleServantData_o *__fastcall ServantAiActArgument__get_SvtData(
        ServantAiActArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtData_k__BackingField;
}


int32_t __fastcall ServantAiActArgument__get_UniqueId(ServantAiActArgument_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *SvtData_k__BackingField; // x8

  SvtData_k__BackingField = this->fields._SvtData_k__BackingField;
  if ( !SvtData_k__BackingField )
    sub_B170D4();
  return SvtData_k__BackingField->fields.uniqueId;
}


void __fastcall ServantAiActArgument__set_IsNoMessage(
        ServantAiActArgument_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNoMessage_k__BackingField = value;
}


void __fastcall ServantAiActArgument__set_SvtData(
        ServantAiActArgument_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SvtData_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SvtData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}