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
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields.titleName = titleName;
  sub_1C3B708(&this->fields.titleName);
  this->fields.isFollower = v9;
  this->fields.displayValueType = displayValueType;
}


void __fastcall PartyOrganizationEventPointListViewItem___ctor_33123740(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        EventMargeItemUpValInfo_o *margeItemInfo,
        int32_t displayValueType,
        const MethodInfo *method)
{
  this->fields.displayValueType = 1;
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields.margeItemInfo = margeItemInfo;
  sub_1C3B708(&this->fields.margeItemInfo);
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
  __int64 v7; // x1
  EventMargeItemUpValInfo_o *v9; // x0
  System_String_o *ColorString; // x20
  System_String_o *v11; // x2

  if ( (byte_4C1DB6F & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    sub_1C3B764(&StringLiteral_10452/*"Portuguese (Brazil)"*/, v4);
    byte_4C1DB6F = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0LL);
  if ( System_String__IsNullOrEmpty(EventUpString, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v9 = this->fields.margeItemInfo;
  if ( !v9 )
    sub_1C3B9C0(0LL, v7);
  ColorString = EventMargeItemUpValInfo__GetColorString(v9, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10452/*"Portuguese (Brazil)"*/, 0LL);
  return System_String__Concat_63379872(ColorString, EventUpString, v11, 0LL);
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
  __int64 v13; // x1
  System_String_o *v14; // x20
  System_String_o *NameTitleString; // x0
  System_String_o *v16; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v20; // x0
  int32_t displayValueType; // w8
  System_String_o *v22; // x19
  System_String_o *v23; // x1

  if ( (byte_4C1DB6E & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_10454/*"Position"*/, v3);
    sub_1C3B764(&StringLiteral_10456/*"Position: {0}, Size: {1}"*/, v4);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    sub_1C3B764(&StringLiteral_10448/*"PopupTextCondensedScaleSize"*/, v6);
    byte_4C1DB6E = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v7 = (System_String_o **)&StringLiteral_10454/*"Position"*/;
    else
      v7 = (System_String_o **)&StringLiteral_10448/*"PopupTextCondensedScaleSize"*/;
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
    || (v14 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0LL),
        ColorString = System_String__Concat_63368612(v14, NameTitleString, 0LL),
        !this->fields.margeItemInfo)
    || (v16 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo)
    || (v17 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo) )
  {
    sub_1C3B9C0(ColorString, v13);
  }
  v18 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0LL);
  v20 = System_String__Format_63383052(v16, v17, v18, TargetString, 0LL);
  displayValueType = this->fields.displayValueType;
  v22 = v20;
  if ( displayValueType )
    return v22;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"Position: {0}, Size: {1}"*/, 0LL);
  return System_String__Concat_63368612(v22, v23, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0LL;
}