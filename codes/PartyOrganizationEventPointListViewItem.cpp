void __fastcall PartyOrganizationEventPointListViewItem___ctor(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        System_String_o *titleName,
        bool isFollower,
        int32_t displayValueType,
        const MethodInfo *method)
{
  bool v9; // w23

  v9 = isFollower;
  this->fields.displayValueType = 1;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.titleName = titleName;
  sub_1BCA784(&this->fields.titleName, titleName);
  this->fields.isFollower = v9;
  this->fields.displayValueType = displayValueType;
}


void __fastcall PartyOrganizationEventPointListViewItem___ctor_32580376(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        EventMargeItemUpValInfo_o *margeItemInfo,
        int32_t displayValueType,
        const MethodInfo *method)
{
  this->fields.displayValueType = 1;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.margeItemInfo = margeItemInfo;
  sub_1BCA784(&this->fields.margeItemInfo, margeItemInfo);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *EventUpString; // x19
  __int64 v10; // x1
  EventMargeItemUpValInfo_o *v12; // x0
  __int64 v13; // x1
  System_String_o *ColorString; // x20
  System_String_o *v15; // x2

  if ( (byte_4B11F37 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_10388/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, v6, v7);
    byte_4B11F37 = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0LL);
  if ( System_String__IsNullOrEmpty(EventUpString, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v12 = this->fields.margeItemInfo;
  if ( !v12 )
    sub_1BCAA3C(0LL, v10);
  ColorString = EventMargeItemUpValInfo__GetColorString(v12, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10388/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0LL);
  return System_String__Concat_62412480(ColorString, EventUpString, v15, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o **v12; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *ColorString; // x0
  __int64 v18; // x1
  System_String_o *v19; // x20
  System_String_o *NameTitleString; // x0
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v25; // x0
  __int64 v26; // x1
  int32_t displayValueType; // w8
  System_String_o *v28; // x19
  System_String_o *v29; // x1

  if ( (byte_4B11F36 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10390/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_10392/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10384/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v10, v11);
    byte_4B11F36 = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v12 = (System_String_o **)&StringLiteral_10390/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v12 = (System_String_o **)&StringLiteral_10384/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
    v13 = *v12;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v14 = LocalizationManager__Get(v13, 0LL);
    return System_String__Format(v14, (Il2CppObject *)this->fields.titleName, 0LL);
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  ColorString = EventMargeItemUpValInfo__GetColorString(margeItemInfo, 0LL);
  if ( !this->fields.margeItemInfo
    || (v19 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0LL),
        ColorString = System_String__Concat_62401220(v19, NameTitleString, 0LL),
        !this->fields.margeItemInfo)
    || (v21 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo)
    || (v22 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo) )
  {
    sub_1BCAA3C(ColorString, v18);
  }
  v23 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0LL);
  v25 = System_String__Format_62415660(v21, v22, v23, TargetString, 0LL);
  displayValueType = this->fields.displayValueType;
  v28 = v25;
  if ( displayValueType )
    return v28;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0LL);
  return System_String__Concat_62401220(v28, v29, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0LL;
}