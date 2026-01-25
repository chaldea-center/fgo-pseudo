// local variable allocation has failed, the output may be wrong!
void ServantAiActArgument___ctor(
        ServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        int32_t procState,
        bool isNoMessage,
        const MethodInfo *method)
{
  ServantAiActArgument_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v9 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, procState, *(const MethodInfo **)&procState);
  v9->fields._SvtData_k__BackingField = svtData;
  v9 = (ServantAiActArgument_o *)((char *)v9 + 40);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v9, (int32_t)svtData, v10, v11, v12, v13, v14, v15);
  LOBYTE(v9->monitor) = isNoMessage;
}


void ServantAiActArgument__InitCommonTask(
        ServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantAiActArgument_o *v8; // x20
  struct AiBaseEntity_o *AiEnt_k__BackingField; // x8
  struct System_String_o *infoText; // x1

  v8 = this;
  if ( !this->fields._IsNoMessage_k__BackingField )
  {
    AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
    if ( !AiEnt_k__BackingField || !task )
      goto LABEL_10;
    infoText = AiEnt_k__BackingField->fields.infoText;
    task->fields.motionMessage = infoText;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&task->fields.motionMessage,
      (int32_t)infoText,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  this = (ServantAiActArgument_o *)v8->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_10;
  this = (ServantAiActArgument_o *)AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !task )
LABEL_10:
    sub_1C7BD40(this, task);
  task->fields.isForcedSpeedOne = 1;
}


bool ServantAiActArgument__get_IsNoMessage(ServantAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._IsNoMessage_k__BackingField;
}


BattleServantData_o *ServantAiActArgument__get_SvtData(ServantAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._SvtData_k__BackingField;
}


int32_t ServantAiActArgument__get_UniqueId(ServantAiActArgument_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *SvtData_k__BackingField; // x8

  SvtData_k__BackingField = this->fields._SvtData_k__BackingField;
  if ( !SvtData_k__BackingField )
    sub_1C7BD40(this, method);
  return SvtData_k__BackingField->fields.uniqueId;
}


void ServantAiActArgument__set_IsNoMessage(ServantAiActArgument_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNoMessage_k__BackingField = value;
}


void ServantAiActArgument__set_SvtData(
        ServantAiActArgument_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SvtData_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SvtData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}