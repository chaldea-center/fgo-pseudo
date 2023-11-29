void __fastcall SubmarineSpotInfo___ctor(
        SubmarineSpotInfo_o *this,
        SpotEntity_o *spot,
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        int32_t panelId,
        const MethodInfo *method)
{
  SubmarineSpotInfo_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._SpotEntity_k__BackingField = spot;
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields, (System_Int32_array **)spot, v9, v10, v11, v12, v13, v14);
  v8->fields._EventPanelSpotEntity_k__BackingField = eventPanelSpotEntity;
  v8 = (SubmarineSpotInfo_o *)((char *)v8 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)v8,
    (System_Int32_array **)eventPanelSpotEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  LODWORD(v8->monitor) = panelId;
}


EventPanelSpotEntity_o *__fastcall SubmarineSpotInfo__get_EventPanelSpotEntity(
        SubmarineSpotInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventPanelSpotEntity_k__BackingField;
}


bool __fastcall SubmarineSpotInfo__get_IsOnPanel(SubmarineSpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField > 0;
}


int32_t __fastcall SubmarineSpotInfo__get_PanelId(SubmarineSpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField;
}


SpotEntity_o *__fastcall SubmarineSpotInfo__get_SpotEntity(SubmarineSpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._SpotEntity_k__BackingField;
}


void __fastcall SubmarineSpotInfo__set_EventPanelSpotEntity(
        SubmarineSpotInfo_o *this,
        EventPanelSpotEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EventPanelSpotEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EventPanelSpotEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineSpotInfo__set_PanelId(SubmarineSpotInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PanelId_k__BackingField = value;
}


void __fastcall SubmarineSpotInfo__set_SpotEntity(
        SubmarineSpotInfo_o *this,
        SpotEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SpotEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}