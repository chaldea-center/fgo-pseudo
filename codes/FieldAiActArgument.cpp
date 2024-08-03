void __fastcall FieldAiActArgument___ctor(
        FieldAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleFieldData_o *fieldData,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  FieldAiActArgument_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v8 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, (const MethodInfo *)fieldData);
  v8->fields._FieldData_k__BackingField = fieldData;
  v8 = (FieldAiActArgument_o *)((char *)v8 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v8, (int32_t)fieldData, v9, v10);
  LOBYTE(v8->monitor) = isForcedSpeedOne;
}


void __fastcall FieldAiActArgument__InitCommonTask(
        FieldAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct AiBaseEntity_o *AiEnt_k__BackingField; // x8
  struct System_String_o *infoText; // x8

  if ( !task
    || (task->fields.isForcedSpeedOne = this->fields._IsForcedSpeedOne_k__BackingField,
        (AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField) == 0LL) )
  {
    sub_1B64324(this);
  }
  infoText = AiEnt_k__BackingField->fields.infoText;
  task->fields.motionMessage = infoText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&task->fields.motionMessage, (int32_t)infoText, (int32_t)method, v3);
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
    sub_1B64324(this);
  return FieldData_k__BackingField->fields.uniqueId;
}


void __fastcall FieldAiActArgument__set_FieldData(
        FieldAiActArgument_o *this,
        BattleFieldData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._FieldData_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._FieldData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FieldAiActArgument__set_IsForcedSpeedOne(
        FieldAiActArgument_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsForcedSpeedOne_k__BackingField = value;
}