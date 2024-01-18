void __fastcall SubmarineSpotInfo___ctor(
        SubmarineSpotInfo_o *this,
        SpotEntity_o *spot,
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        int32_t panelId,
        const MethodInfo *method)
{
  SubmarineSpotInfo_o *v8; // x22

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._SpotEntity_k__BackingField = spot;
  sub_B2C2F8(&v8->fields, spot);
  v8->fields._EventPanelSpotEntity_k__BackingField = eventPanelSpotEntity;
  v8 = (SubmarineSpotInfo_o *)((char *)v8 + 24);
  sub_B2C2F8(v8, eventPanelSpotEntity);
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
  this->fields._EventPanelSpotEntity_k__BackingField = value;
  sub_B2C2F8(&this->fields._EventPanelSpotEntity_k__BackingField, value);
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
  this->fields._SpotEntity_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
}