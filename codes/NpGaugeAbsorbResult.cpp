void __fastcall NpGaugeAbsorbResult___ctor(
        NpGaugeAbsorbResult_o *this,
        BaseNpGaugeConvert_o *convert,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Convert_k__BackingField = convert;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Convert_k__BackingField,
    (System_Int32_array **)convert,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall NpGaugeAbsorbResult__AddPoint(NpGaugeAbsorbResult_o *this, int32_t point, const MethodInfo *method)
{
  float Point_k__BackingField; // s0
  struct BaseNpGaugeConvert_o *Convert_k__BackingField; // x0
  float Turn_k__BackingField; // s8

  Point_k__BackingField = this->fields._Point_k__BackingField;
  Convert_k__BackingField = this->fields._Convert_k__BackingField;
  this->fields._Point_k__BackingField = Point_k__BackingField + (float)point;
  if ( !Convert_k__BackingField )
    sub_B170D4();
  Turn_k__BackingField = this->fields._Turn_k__BackingField;
  this->fields._Turn_k__BackingField = Turn_k__BackingField
                                     + ((float (__fastcall *)(struct BaseNpGaugeConvert_o *))Convert_k__BackingField->klass->vtable._7_PointToTurn.method)(Convert_k__BackingField);
}


void __fastcall NpGaugeAbsorbResult__AddTurn(NpGaugeAbsorbResult_o *this, int32_t turn, const MethodInfo *method)
{
  float Turn_k__BackingField; // s0
  struct BaseNpGaugeConvert_o *Convert_k__BackingField; // x0
  float Point_k__BackingField; // s8

  Turn_k__BackingField = this->fields._Turn_k__BackingField;
  Convert_k__BackingField = this->fields._Convert_k__BackingField;
  this->fields._Turn_k__BackingField = Turn_k__BackingField + (float)turn;
  if ( !Convert_k__BackingField )
    sub_B170D4();
  Point_k__BackingField = this->fields._Point_k__BackingField;
  this->fields._Point_k__BackingField = Point_k__BackingField
                                      + ((float (__fastcall *)(struct BaseNpGaugeConvert_o *))Convert_k__BackingField->klass->vtable._6_TurnToPoint.method)(Convert_k__BackingField);
}


BaseNpGaugeConvert_o *__fastcall NpGaugeAbsorbResult__get_Convert(
        NpGaugeAbsorbResult_o *this,
        const MethodInfo *method)
{
  return this->fields._Convert_k__BackingField;
}


float __fastcall NpGaugeAbsorbResult__get_Point(NpGaugeAbsorbResult_o *this, const MethodInfo *method)
{
  return this->fields._Point_k__BackingField;
}


float __fastcall NpGaugeAbsorbResult__get_Turn(NpGaugeAbsorbResult_o *this, const MethodInfo *method)
{
  return this->fields._Turn_k__BackingField;
}


void __fastcall NpGaugeAbsorbResult__set_Convert(
        NpGaugeAbsorbResult_o *this,
        BaseNpGaugeConvert_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Convert_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Convert_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NpGaugeAbsorbResult__set_Point(NpGaugeAbsorbResult_o *this, float value, const MethodInfo *method)
{
  this->fields._Point_k__BackingField = value;
}


void __fastcall NpGaugeAbsorbResult__set_Turn(NpGaugeAbsorbResult_o *this, float value, const MethodInfo *method)
{
  this->fields._Turn_k__BackingField = value;
}