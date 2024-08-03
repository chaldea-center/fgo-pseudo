void __fastcall PartyOrganizationEventPointListViewItem___ctor(
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

  v9 = isFollower;
  this->fields.displayValueType = 1;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.titleName = titleName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.titleName, (int32_t)titleName, v10, v11);
  this->fields.isFollower = v9;
  this->fields.displayValueType = displayValueType;
}


void __fastcall PartyOrganizationEventPointListViewItem___ctor_31771892(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        EventMargeItemUpValInfo_o *margeItemInfo,
        int32_t displayValueType,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3

  this->fields.displayValueType = 1;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.margeItemInfo = margeItemInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.margeItemInfo, (int32_t)margeItemInfo, v8, v9);
  this->fields.displayValueType = displayValueType;
}


void __fastcall PartyOrganizationEventPointListViewItem__Finalize(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall PartyOrganizationEventPointListViewItem__GetDataString(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *EventUpString; // x19
  EventMargeItemUpValInfo_o *v8; // x0
  System_String_o *ColorString; // x20
  System_String_o *v10; // x2

  if ( (byte_49F8393 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    sub_1B640C8(&StringLiteral_10206/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, v4);
    byte_49F8393 = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0LL);
  if ( System_String__IsNullOrEmpty(EventUpString, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = this->fields.margeItemInfo;
  if ( !v8 )
    sub_1B64324(0LL);
  ColorString = EventMargeItemUpValInfo__GetColorString(v8, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10206/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0LL);
  return System_String__Concat_61386656(ColorString, EventUpString, v10, 0LL);
}


int32_t __fastcall PartyOrganizationEventPointListViewItem__GetDisplayValueType(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.displayValueType;
}


System_String_o *__fastcall PartyOrganizationEventPointListViewItem__GetTitleString(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o **v7; // x8
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *ColorString; // x0
  System_String_o *v13; // x20
  System_String_o *NameTitleString; // x0
  System_String_o *v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v19; // x0
  int32_t displayValueType; // w8
  System_String_o *v21; // x19
  System_String_o *v22; // x1

  if ( (byte_49F8392 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10208/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v3);
    sub_1B640C8(&StringLiteral_10210/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    sub_1B640C8(&StringLiteral_10202/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v6);
    byte_49F8392 = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v7 = (System_String_o **)&StringLiteral_10208/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v7 = (System_String_o **)&StringLiteral_10202/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
    v8 = *v7;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get(v8, 0LL);
    return System_String__Format(v9, (Il2CppObject *)this->fields.titleName, 0LL);
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  ColorString = EventMargeItemUpValInfo__GetColorString(margeItemInfo, 0LL);
  if ( !this->fields.margeItemInfo
    || (v13 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0LL),
        ColorString = System_String__Concat_61375396(v13, NameTitleString, 0LL),
        !this->fields.margeItemInfo)
    || (v15 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo)
    || (v16 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo) )
  {
    sub_1B64324(ColorString);
  }
  v17 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0LL);
  v19 = System_String__Format_61389836(v15, v16, v17, TargetString, 0LL);
  displayValueType = this->fields.displayValueType;
  v21 = v19;
  if ( displayValueType )
    return v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10210/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0LL);
  return System_String__Concat_61375396(v21, v22, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0LL;
}