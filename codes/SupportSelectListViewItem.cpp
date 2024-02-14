void __fastcall SupportSelectListViewItem___ctor(
        SupportSelectListViewItem_o *this,
        int32_t index,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.supportServantData = supportServantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)supportServantData,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaigns,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall SupportSelectListViewItem__ResetEventCampaign(
        SupportSelectListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaigns,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *__fastcall SupportSelectListViewItem__get_DeckName(
        SupportSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct SupportServantData_o *supportServantData; // x8

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    sub_B0D97C(this);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._listObj_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._listObj_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SupportSelectListViewItem__setuplistObj(
        SupportSelectListViewItem_o *this,
        SupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportSelectListViewObject_o **p_listObj_k__BackingField; // x20
  const MethodInfo *v10; // x4

  this->fields._listObj_k__BackingField = obj;
  p_listObj_k__BackingField = &this->fields._listObj_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._listObj_k__BackingField,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_listObj_k__BackingField )
    sub_B0D97C(0LL);
  SupportSelectListViewObject__Init(
    *p_listObj_k__BackingField,
    this->fields.supportServantData,
    this->fields.eventFriendPoints,
    this->fields.index,
    v10);
}