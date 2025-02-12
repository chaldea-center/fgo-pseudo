// local variable allocation has failed, the output may be wrong!
void __fastcall FieldAiActArgument___ctor(
        FieldAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleFieldData_o *fieldData,
        bool isForcedSpeedOne,
        int32_t procState,
        const MethodInfo *method)
{
  FieldAiActArgument_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v9 = this;
  BaseAiActArgument___ctor(
    (BaseAiActArgument_o *)this,
    aiActEnt,
    aiEnt,
    procState,
    (const MethodInfo *)isForcedSpeedOne);
  v9->fields._FieldData_k__BackingField = fieldData;
  v9 = (FieldAiActArgument_o *)((char *)v9 + 40);
  sub_1C1AB78((PartyOrganizationUtility_o *)v9, (int64_t)fieldData, v10, v11, v12, v13, v14, v15);
  LOBYTE(v9->monitor) = isForcedSpeedOne;
}


void __fastcall FieldAiActArgument__InitCommonTask(
        FieldAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct AiBaseEntity_o *AiEnt_k__BackingField; // x8
  struct System_String_o *infoText; // x8

  if ( !task
    || (task->fields.isForcedSpeedOne = this->fields._IsForcedSpeedOne_k__BackingField,
        (AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField) == 0LL) )
  {
    sub_1C1AE30(this, task);
  }
  infoText = AiEnt_k__BackingField->fields.infoText;
  task->fields.motionMessage = infoText;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&task->fields.motionMessage,
    (int64_t)infoText,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


BattleFieldData_o *__fastcall FieldAiActArgument__get_FieldData(FieldAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._FieldData_k__BackingField;
}


bool __fastcall FieldAiActArgument__get_IsForcedSpeedOne(FieldAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._IsForcedSpeedOne_k__BackingField;
}


int32_t __fastcall FieldAiActArgument__get_UniqueId(FieldAiActArgument_o *this, const MethodInfo *method)
{
  struct BattleFieldData_o *FieldData_k__BackingField; // x8

  FieldData_k__BackingField = this->fields._FieldData_k__BackingField;
  if ( !FieldData_k__BackingField )
    sub_1C1AE30(this, method);
  return FieldData_k__BackingField->fields.uniqueId;
}


void __fastcall FieldAiActArgument__set_FieldData(
        FieldAiActArgument_o *this,
        BattleFieldData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FieldData_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._FieldData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FieldAiActArgument__set_IsForcedSpeedOne(
        FieldAiActArgument_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsForcedSpeedOne_k__BackingField = value;
}