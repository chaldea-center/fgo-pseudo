void SubmarineSpotInfo___ctor(
        SubmarineSpotInfo_o *this,
        SpotEntity_o *spot,
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        int32_t panelId,
        const MethodInfo *method)
{
  SubmarineSpotInfo_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields._SpotEntity_k__BackingField = spot;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields, (int32_t)spot, v9, v10);
  v8->fields._EventPanelSpotEntity_k__BackingField = eventPanelSpotEntity;
  v8 = (SubmarineSpotInfo_o *)((char *)v8 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)v8, (int32_t)eventPanelSpotEntity, v11, v12);
  LODWORD(v8->monitor) = panelId;
}


EventPanelSpotEntity_o *SubmarineSpotInfo__get_EventPanelSpotEntity(
        SubmarineSpotInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventPanelSpotEntity_k__BackingField;
}


bool SubmarineSpotInfo__get_IsOnPanel(SubmarineSpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField > 0;
}


int32_t SubmarineSpotInfo__get_PanelId(SubmarineSpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField;
}


SpotEntity_o *SubmarineSpotInfo__get_SpotEntity(SubmarineSpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._SpotEntity_k__BackingField;
}


void SubmarineSpotInfo__set_EventPanelSpotEntity(
        SubmarineSpotInfo_o *this,
        EventPanelSpotEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventPanelSpotEntity_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._EventPanelSpotEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineSpotInfo__set_PanelId(SubmarineSpotInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PanelId_k__BackingField = value;
}


void SubmarineSpotInfo__set_SpotEntity(SubmarineSpotInfo_o *this, SpotEntity_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SpotEntity_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}