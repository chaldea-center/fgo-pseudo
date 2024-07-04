void __fastcall SupportSelectListViewItem___ctor(
        SupportSelectListViewItem_o *this,
        int32_t index,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  ListViewItem___ctor_39415512((ListViewItem_o *)this, index, 0LL);
  this->fields.supportServantData = supportServantData;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    v8,
    v9);
  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    v10,
    v11);
}


void __fastcall SupportSelectListViewItem__ResetEventCampaign(
        SupportSelectListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
}


System_String_o *__fastcall SupportSelectListViewItem__get_DeckName(
        SupportSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct SupportServantData_o *supportServantData; // x8

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    sub_1B00F28(this, method);
  return supportServantData->fields._deckName_k__BackingField;
}


SupportSelectListViewObject_o *__fastcall SupportSelectListViewItem__get_listObj(
        SupportSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._listObj_k__BackingField;
}


void __fastcall SupportSelectListViewItem__set_listObj(
        SupportSelectListViewItem_o *this,
        SupportSelectListViewObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._listObj_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._listObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SupportSelectListViewItem__setuplistObj(
        SupportSelectListViewItem_o *this,
        SupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  SupportSelectListViewObject_o **p_listObj_k__BackingField; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  this->fields._listObj_k__BackingField = obj;
  p_listObj_k__BackingField = &this->fields._listObj_k__BackingField;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._listObj_k__BackingField,
    (int32_t)obj,
    (int32_t)method,
    v3);
  if ( !*p_listObj_k__BackingField )
    sub_1B00F28(0LL, v6);
  SupportSelectListViewObject__Init(
    *p_listObj_k__BackingField,
    this->fields.supportServantData,
    this->fields.eventFriendPoints,
    this->fields.index,
    v7);
}