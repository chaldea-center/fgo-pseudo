void __fastcall ServantAiActArgument___ctor(
        ServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        bool isNoMessage,
        const MethodInfo *method)
{
  ServantAiActArgument_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v8 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, (const MethodInfo *)svtData);
  v8->fields._SvtData_k__BackingField = svtData;
  v8 = (ServantAiActArgument_o *)((char *)v8 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)v8, (int64_t)svtData, v9, v10, v11, v12, v13, v14);
  LOBYTE(v8->monitor) = isNoMessage;
}


void __fastcall ServantAiActArgument__InitCommonTask(
        ServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&task->fields.motionMessage,
      (int64_t)infoText,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  this = (ServantAiActArgument_o *)v8->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_10;
  this = (ServantAiActArgument_o *)AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !task )
LABEL_10:
    sub_1BCAA3C(this, task);
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
    sub_1BCAA3C(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SvtData_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SvtData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}