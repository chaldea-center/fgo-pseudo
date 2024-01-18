void __fastcall StandFigureCollect___ctor(
        StandFigureCollect_o *this,
        SvtMultiPortraitEntity_o *entity,
        UIStandFigureR_o *standFigure,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._entity_k__BackingField = entity;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)entity, v7, v8, v9, v10, v11, v12);
  this->fields._standFigure_k__BackingField = standFigure;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._standFigure_k__BackingField,
    (System_Int32_array **)standFigure,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


SvtMultiPortraitEntity_o *__fastcall StandFigureCollect__get_entity(
        StandFigureCollect_o *this,
        const MethodInfo *method)
{
  return this->fields._entity_k__BackingField;
}


UIStandFigureR_o *__fastcall StandFigureCollect__get_standFigure(StandFigureCollect_o *this, const MethodInfo *method)
{
  return this->fields._standFigure_k__BackingField;
}


void __fastcall StandFigureCollect__set_entity(
        StandFigureCollect_o *this,
        SvtMultiPortraitEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._entity_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall StandFigureCollect__set_standFigure(
        StandFigureCollect_o *this,
        UIStandFigureR_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._standFigure_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._standFigure_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}