void __fastcall StandFigureCollect___ctor(
        StandFigureCollect_o *this,
        SvtMultiPortraitEntity_o *entity,
        UIStandFigureR_o *standFigure,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._entity_k__BackingField = entity;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)entity, v7, v8, v9, v10, v11, v12);
  this->fields._standFigure_k__BackingField = standFigure;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._standFigure_k__BackingField,
    (int64_t)standFigure,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._entity_k__BackingField = value;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall StandFigureCollect__set_standFigure(
        StandFigureCollect_o *this,
        UIStandFigureR_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._standFigure_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._standFigure_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}