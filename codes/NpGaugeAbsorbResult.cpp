void NpGaugeAbsorbResult___ctor(NpGaugeAbsorbResult_o *this, BaseNpGaugeConvert_o *convert, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Convert_k__BackingField = convert;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Convert_k__BackingField,
    (int32_t)convert,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void NpGaugeAbsorbResult__AddPoint(NpGaugeAbsorbResult_o *this, int32_t point, const MethodInfo *method)
{
  float Point_k__BackingField; // s0
  struct BaseNpGaugeConvert_o *Convert_k__BackingField; // x0
  float Turn_k__BackingField; // s8

  Point_k__BackingField = this->fields._Point_k__BackingField;
  Convert_k__BackingField = this->fields._Convert_k__BackingField;
  this->fields._Point_k__BackingField = Point_k__BackingField + (float)point;
  if ( !Convert_k__BackingField )
    sub_1C942F0(0, point);
  Turn_k__BackingField = this->fields._Turn_k__BackingField;
  this->fields._Turn_k__BackingField = Turn_k__BackingField
                                     + ((float (__fastcall *)(struct BaseNpGaugeConvert_o *))Convert_k__BackingField->klass->vtable._7_PointToTurn.methodPtr)(Convert_k__BackingField);
}


void NpGaugeAbsorbResult__AddTurn(NpGaugeAbsorbResult_o *this, int32_t turn, const MethodInfo *method)
{
  float Turn_k__BackingField; // s0
  struct BaseNpGaugeConvert_o *Convert_k__BackingField; // x0
  float Point_k__BackingField; // s8

  Turn_k__BackingField = this->fields._Turn_k__BackingField;
  Convert_k__BackingField = this->fields._Convert_k__BackingField;
  this->fields._Turn_k__BackingField = Turn_k__BackingField + (float)turn;
  if ( !Convert_k__BackingField )
    sub_1C942F0(0, turn);
  Point_k__BackingField = this->fields._Point_k__BackingField;
  this->fields._Point_k__BackingField = Point_k__BackingField
                                      + ((float (__fastcall *)(struct BaseNpGaugeConvert_o *))Convert_k__BackingField->klass->vtable._6_TurnToPoint.methodPtr)(Convert_k__BackingField);
}


BaseNpGaugeConvert_o *NpGaugeAbsorbResult__get_Convert(NpGaugeAbsorbResult_o *this, const MethodInfo *method)
{
  return this->fields._Convert_k__BackingField;
}


float NpGaugeAbsorbResult__get_Point(NpGaugeAbsorbResult_o *this, const MethodInfo *method)
{
  return this->fields._Point_k__BackingField;
}


float NpGaugeAbsorbResult__get_Turn(NpGaugeAbsorbResult_o *this, const MethodInfo *method)
{
  return this->fields._Turn_k__BackingField;
}


void NpGaugeAbsorbResult__set_Convert(
        NpGaugeAbsorbResult_o *this,
        BaseNpGaugeConvert_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Convert_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Convert_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NpGaugeAbsorbResult__set_Point(NpGaugeAbsorbResult_o *this, float value, const MethodInfo *method)
{
  this->fields._Point_k__BackingField = value;
}


void NpGaugeAbsorbResult__set_Turn(NpGaugeAbsorbResult_o *this, float value, const MethodInfo *method)
{
  this->fields._Turn_k__BackingField = value;
}