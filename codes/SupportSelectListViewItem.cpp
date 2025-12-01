void SupportSelectListViewItem___ctor(
        SupportSelectListViewItem_o *this,
        int32_t index,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.supportServantData = supportServantData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void SupportSelectListViewItem__ResetEventCampaign(
        SupportSelectListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *SupportSelectListViewItem__get_DeckName(SupportSelectListViewItem_o *this, const MethodInfo *method)
{
  struct SupportServantData_o *supportServantData; // x8

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    sub_1C71608(this, method);
  return supportServantData->fields._deckName_k__BackingField;
}


SupportSelectListViewObject_o *SupportSelectListViewItem__get_listObj(
        SupportSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._listObj_k__BackingField;
}


void SupportSelectListViewItem__set_listObj(
        SupportSelectListViewItem_o *this,
        SupportSelectListViewObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._listObj_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._listObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportSelectListViewItem__setuplistObj(
        SupportSelectListViewItem_o *this,
        SupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SupportSelectListViewObject_o **p_listObj_k__BackingField; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  this->fields._listObj_k__BackingField = obj;
  p_listObj_k__BackingField = &this->fields._listObj_k__BackingField;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._listObj_k__BackingField,
    (int32_t)obj,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_listObj_k__BackingField )
    sub_1C71608(0, v10);
  SupportSelectListViewObject__Init(
    *p_listObj_k__BackingField,
    this->fields.supportServantData,
    this->fields.eventFriendPoints,
    this->fields.index,
    v11);
}