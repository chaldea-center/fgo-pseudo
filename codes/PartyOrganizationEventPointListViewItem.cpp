void PartyOrganizationEventPointListViewItem___ctor(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        System_String_o *titleName,
        bool isFollower,
        int32_t displayValueType,
        const MethodInfo *method)
{
  bool v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v9 = isFollower;
  this->fields.displayValueType = 1;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.titleName = titleName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.titleName, (int32_t)titleName, v10, v11);
  this->fields.isFollower = v9;
  this->fields.displayValueType = displayValueType;
}


void PartyOrganizationEventPointListViewItem___ctor_34111048(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        EventMargeItemUpValInfo_o *margeItemInfo,
        int32_t displayValueType,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  this->fields.displayValueType = 1;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.margeItemInfo = margeItemInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.margeItemInfo, (int32_t)margeItemInfo, v8, v9);
  this->fields.displayValueType = displayValueType;
}


void PartyOrganizationEventPointListViewItem__Finalize(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *PartyOrganizationEventPointListViewItem__GetDataString(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *EventUpString; // x19
  EventMargeItemUpValInfo_o *v6; // x0
  System_String_o *ColorString; // x20
  System_String_o *v8; // x2

  if ( (byte_4C333DD & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10231/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/);
    byte_4C333DD = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0);
  if ( System_String__IsNullOrEmpty(EventUpString, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = this->fields.margeItemInfo;
  if ( !v6 )
    sub_1C32E7C(0);
  ColorString = EventMargeItemUpValInfo__GetColorString(v6, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10231/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0);
  return System_String__Concat_63556792(ColorString, EventUpString, v8, 0);
}


int32_t PartyOrganizationEventPointListViewItem__GetDisplayValueType(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.displayValueType;
}


System_String_o *PartyOrganizationEventPointListViewItem__GetTitleString(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o **v3; // x8
  System_String_o *v4; // x20
  System_String_o *v5; // x0
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *ColorString; // x0
  System_String_o *v9; // x20
  System_String_o *NameTitleString; // x0
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v15; // x0
  int32_t displayValueType; // w8
  System_String_o *v17; // x19
  System_String_o *v18; // x1

  if ( (byte_4C333DC & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10233/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_1C32C20(&StringLiteral_10235/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10226/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_4C333DC = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v3 = (System_String_o **)&StringLiteral_10233/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v3 = (System_String_o **)&StringLiteral_10226/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
    v4 = *v3;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get(v4, 0);
    return System_String__Format(v5, (Il2CppObject *)this->fields.titleName, 0);
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  ColorString = EventMargeItemUpValInfo__GetColorString(margeItemInfo, 0);
  if ( !this->fields.margeItemInfo
    || (v9 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0),
        ColorString = System_String__Concat_63518544(v9, NameTitleString, 0),
        !this->fields.margeItemInfo)
    || (v11 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0),
        !this->fields.margeItemInfo)
    || (v12 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0),
        !this->fields.margeItemInfo) )
  {
    sub_1C32E7C(ColorString);
  }
  v13 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0);
  v15 = System_String__Format_63559904(v11, v12, v13, TargetString, 0);
  displayValueType = this->fields.displayValueType;
  v17 = v15;
  if ( displayValueType )
    return v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10235/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0);
  return System_String__Concat_63518544(v17, v18, 0);
}


bool PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0;
}