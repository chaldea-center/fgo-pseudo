void StandFigureCollect___ctor(
        StandFigureCollect_o *this,
        SvtMultiPortraitEntity_o *entity,
        UIStandFigureR_o *standFigure,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._entity_k__BackingField = entity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)entity, v7, v8, v9, v10, v11, v12);
  this->fields._standFigure_k__BackingField = standFigure;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._standFigure_k__BackingField,
    (int32_t)standFigure,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


SvtMultiPortraitEntity_o *StandFigureCollect__get_entity(StandFigureCollect_o *this, const MethodInfo *method)
{
  return this->fields._entity_k__BackingField;
}


UIStandFigureR_o *StandFigureCollect__get_standFigure(StandFigureCollect_o *this, const MethodInfo *method)
{
  return this->fields._standFigure_k__BackingField;
}


void StandFigureCollect__set_entity(
        StandFigureCollect_o *this,
        SvtMultiPortraitEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._entity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StandFigureCollect__set_standFigure(StandFigureCollect_o *this, UIStandFigureR_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._standFigure_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._standFigure_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}