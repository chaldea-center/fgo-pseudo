void SupportSelectListViewItem___ctor(
        SupportSelectListViewItem_o *this,
        int32_t index,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.supportServantData = supportServantData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (System_String_o *)method,
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
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._listObj_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._listObj_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SupportSelectListViewObject_o **p_listObj_k__BackingField; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  this->fields._listObj_k__BackingField = obj;
  p_listObj_k__BackingField = &this->fields._listObj_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._listObj_k__BackingField,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_listObj_k__BackingField )
    sub_2213CDC(0, v10);
  SupportSelectListViewObject__Init(
    *p_listObj_k__BackingField,
    this->fields.supportServantData,
    this->fields.eventFriendPoints,
    this->fields.index,
    v11);
}