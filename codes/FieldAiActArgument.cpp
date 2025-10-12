// local variable allocation has failed, the output may be wrong!
void FieldAiActArgument___ctor(
        FieldAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleFieldData_o *fieldData,
        bool isForcedSpeedOne,
        int32_t procState,
        const MethodInfo *method)
{
  FieldAiActArgument_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v9 = this;
  BaseAiActArgument___ctor(
    (BaseAiActArgument_o *)this,
    aiActEnt,
    aiEnt,
    procState,
    (const MethodInfo *)isForcedSpeedOne);
  v9->fields._FieldData_k__BackingField = fieldData;
  v9 = (FieldAiActArgument_o *)((char *)v9 + 40);
  sub_1C32BC4((CGThumbnailListItem_o *)v9, (int32_t)fieldData, v10, v11);
  LOBYTE(v9->monitor) = isForcedSpeedOne;
}


void FieldAiActArgument__InitCommonTask(
        FieldAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct AiBaseEntity_o *AiEnt_k__BackingField; // x8
  struct System_String_o *infoText; // x8

  if ( !task
    || (task->fields.isForcedSpeedOne = this->fields._IsForcedSpeedOne_k__BackingField,
        (AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField) == 0) )
  {
    sub_1C32E7C(this);
  }
  infoText = AiEnt_k__BackingField->fields.infoText;
  task->fields.motionMessage = infoText;
  sub_1C32BC4((CGThumbnailListItem_o *)&task->fields.motionMessage, (int32_t)infoText, (int32_t)method, v3);
}


BattleFieldData_o *FieldAiActArgument__get_FieldData(FieldAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._FieldData_k__BackingField;
}


bool FieldAiActArgument__get_IsForcedSpeedOne(FieldAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._IsForcedSpeedOne_k__BackingField;
}


int32_t FieldAiActArgument__get_UniqueId(FieldAiActArgument_o *this, const MethodInfo *method)
{
  struct BattleFieldData_o *FieldData_k__BackingField; // x8

  FieldData_k__BackingField = this->fields._FieldData_k__BackingField;
  if ( !FieldData_k__BackingField )
    sub_1C32E7C(this);
  return FieldData_k__BackingField->fields.uniqueId;
}


void FieldAiActArgument__set_FieldData(FieldAiActArgument_o *this, BattleFieldData_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FieldData_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._FieldData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void FieldAiActArgument__set_IsForcedSpeedOne(FieldAiActArgument_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsForcedSpeedOne_k__BackingField = value;
}