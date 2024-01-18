void __fastcall FieldAiActArgument___ctor(
        FieldAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleFieldData_o *fieldData,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  FieldAiActArgument_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, 0LL);
  v8->fields._FieldData_k__BackingField = fieldData;
  v8 = (FieldAiActArgument_o *)((char *)v8 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)v8, (System_Int32_array **)fieldData, v9, v10, v11, v12, v13, v14);
  LOBYTE(v8->monitor) = isForcedSpeedOne;
}


void __fastcall FieldAiActArgument__InitCommonTask(
        FieldAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct AiBaseEntity_o *AiEnt_k__BackingField; // x9
  struct System_String_o *infoText; // x1

  if ( !task
    || (task->fields.isForcedSpeedOne = this->fields._IsForcedSpeedOne_k__BackingField,
        (AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField) == 0LL) )
  {
    sub_B2C434(this, task);
  }
  infoText = AiEnt_k__BackingField->fields.infoText;
  task->fields.motionMessage = infoText;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&task->fields.motionMessage,
    (System_Int32_array **)infoText,
    (System_String_array **)method,
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
    sub_B2C434(this, method);
  return FieldData_k__BackingField->fields.uniqueId;
}


void __fastcall FieldAiActArgument__set_FieldData(
        FieldAiActArgument_o *this,
        BattleFieldData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FieldData_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._FieldData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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