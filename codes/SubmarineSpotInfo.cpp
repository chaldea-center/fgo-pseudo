void SubmarineSpotInfo___ctor(
        SubmarineSpotInfo_o *this,
        SpotEntity_o *spot,
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        int32_t panelId,
        const MethodInfo *method)
{
  SubmarineSpotInfo_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields._SpotEntity_k__BackingField = spot;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields, (int32_t)spot, v9, v10, v11, v12, v13, v14);
  v8->fields._EventPanelSpotEntity_k__BackingField = eventPanelSpotEntity;
  v8 = (SubmarineSpotInfo_o *)((char *)v8 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)v8, (int32_t)eventPanelSpotEntity, v15, v16, v17, v18, v19, v20);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventPanelSpotEntity_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventPanelSpotEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineSpotInfo__set_PanelId(SubmarineSpotInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PanelId_k__BackingField = value;
}


void SubmarineSpotInfo__set_SpotEntity(SubmarineSpotInfo_o *this, SpotEntity_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SpotEntity_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}