void StandFigureCollect___ctor(
        StandFigureCollect_o *this,
        SvtMultiPortraitEntity_o *entity,
        UIStandFigureR_o *standFigure,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._entity_k__BackingField = entity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)entity, v7, v8, v9, v10, v11, v12);
  this->fields._standFigure_k__BackingField = standFigure;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._standFigure_k__BackingField,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._entity_k__BackingField = value;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void StandFigureCollect__set_standFigure(StandFigureCollect_o *this, UIStandFigureR_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._standFigure_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._standFigure_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}