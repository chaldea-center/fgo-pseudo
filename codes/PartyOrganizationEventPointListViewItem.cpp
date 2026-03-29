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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v9 = isFollower;
  this->fields.displayValueType = 1;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.titleName = titleName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.titleName, (int32_t)titleName, v10, v11, v12, v13, v14, v15);
  this->fields.isFollower = v9;
  this->fields.displayValueType = displayValueType;
}


void PartyOrganizationEventPointListViewItem___ctor_34815924(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        EventMargeItemUpValInfo_o *margeItemInfo,
        int32_t displayValueType,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  this->fields.displayValueType = 1;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.margeItemInfo = margeItemInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.margeItemInfo,
    (int32_t)margeItemInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v5; // x1
  EventMargeItemUpValInfo_o *v7; // x0
  System_String_o *ColorString; // x20
  System_String_o *v9; // x2

  if ( (byte_4D2C32F & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_10293/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/);
    byte_4D2C32F = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 1, 0);
  if ( System_String__IsNullOrEmpty(EventUpString, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v7 = this->fields.margeItemInfo;
  if ( !v7 )
    sub_1C93D2C(0, v5);
  ColorString = EventMargeItemUpValInfo__GetColorString(v7, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10293/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0);
  return System_String__Concat_64463988(ColorString, EventUpString, v9, 0);
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
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *NameTitleString; // x0
  System_String_o *v12; // x20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v16; // x0
  int32_t displayValueType; // w8
  System_String_o *v18; // x19
  System_String_o *v19; // x1

  if ( (byte_4D2C32E & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10295/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_1C93AD4(&StringLiteral_10297/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_10288/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_4D2C32E = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v3 = (System_String_o **)&StringLiteral_10295/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v3 = (System_String_o **)&StringLiteral_10288/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
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
    || (v10 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0),
        ColorString = System_String__Concat_64425724(v10, NameTitleString, 0),
        !this->fields.margeItemInfo)
    || (v12 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0),
        !this->fields.margeItemInfo)
    || (v13 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0),
        !this->fields.margeItemInfo) )
  {
    sub_1C93D2C(ColorString, v9);
  }
  v14 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0);
  v16 = System_String__Format_64467100(v12, v13, v14, TargetString, 0);
  displayValueType = this->fields.displayValueType;
  v18 = v16;
  if ( displayValueType )
    return v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0);
  return System_String__Concat_64425724(v18, v19, 0);
}


bool PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0;
}