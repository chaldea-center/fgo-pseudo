// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAiActArgument___ctor(
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
  const MethodInfo *v11; // x3

  v9 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, procState, *(const MethodInfo **)&procState);
  v9->fields._SvtData_k__BackingField = svtData;
  v9 = (ServantAiActArgument_o *)((char *)v9 + 40);
  sub_1B4CF34((CGThumbnailListItem_o *)v9, (int32_t)svtData, v10, v11);
  LOBYTE(v9->monitor) = isNoMessage;
}


void __fastcall ServantAiActArgument__InitCommonTask(
        ServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantAiActArgument_o *v4; // x20
  struct AiBaseEntity_o *AiEnt_k__BackingField; // x8
  struct System_String_o *infoText; // x1

  v4 = this;
  if ( !this->fields._IsNoMessage_k__BackingField )
  {
    AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
    if ( !AiEnt_k__BackingField || !task )
      goto LABEL_10;
    infoText = AiEnt_k__BackingField->fields.infoText;
    task->fields.motionMessage = infoText;
    sub_1B4CF34((CGThumbnailListItem_o *)&task->fields.motionMessage, (int32_t)infoText, (int32_t)method, v3);
  }
  this = (ServantAiActArgument_o *)v4->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_10;
  this = (ServantAiActArgument_o *)AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !task )
LABEL_10:
    sub_1B4D1EC(this, task);
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
    sub_1B4D1EC(this, method);
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
  const MethodInfo *v3; // x3

  this->fields._SvtData_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._SvtData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}