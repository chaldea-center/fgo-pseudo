void __fastcall StandFigureCollect___ctor(
        StandFigureCollect_o *this,
        SvtMultiPortraitEntity_o *entity,
        UIStandFigureR_o *standFigure,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._entity_k__BackingField = entity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)entity, v7, v8);
  this->fields._standFigure_k__BackingField = standFigure;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._standFigure_k__BackingField,
    (int32_t)standFigure,
    v9,
    v10);
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
  int32_t v3; // w3

  this->fields._entity_k__BackingField = value;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall StandFigureCollect__set_standFigure(
        StandFigureCollect_o *this,
        UIStandFigureR_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._standFigure_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._standFigure_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}