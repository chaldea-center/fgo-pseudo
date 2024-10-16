void __fastcall ServantAiActArgument___ctor(
        ServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        bool isNoMessage,
        const MethodInfo *method)
{
  ServantAiActArgument_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v8 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, (const MethodInfo *)svtData);
  v8->fields._SvtData_k__BackingField = svtData;
  v8 = (ServantAiActArgument_o *)((char *)v8 + 32);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v8, (int32_t)svtData, v9, v10);
  LOBYTE(v8->monitor) = isNoMessage;
}


void __fastcall ServantAiActArgument__InitCommonTask(
        ServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)&task->fields.motionMessage,
      (int32_t)infoText,
      (int32_t)method,
      v3);
  }
  this = (ServantAiActArgument_o *)v4->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_10;
  this = (ServantAiActArgument_o *)AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !task )
LABEL_10:
    sub_1BAB678(this, task);
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
    sub_1BAB678(this, method);
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
  int32_t v3; // w3

  this->fields._SvtData_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._SvtData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}