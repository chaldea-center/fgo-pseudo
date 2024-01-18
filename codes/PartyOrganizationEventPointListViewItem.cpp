void __fastcall PartyOrganizationEventPointListViewItem___ctor(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        System_String_o *titleName,
        bool isFollower,
        int32_t displayValueType,
        const MethodInfo *method)
{
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  this->fields.displayValueType = 1;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.titleName = titleName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.titleName,
    (System_Int32_array **)titleName,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.isFollower = isFollower;
  this->fields.displayValueType = displayValueType;
}


void __fastcall PartyOrganizationEventPointListViewItem___ctor_32186672(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        EventMargeItemUpValInfo_o *margeItemInfo,
        int32_t displayValueType,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  this->fields.displayValueType = 1;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.margeItemInfo = margeItemInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.margeItemInfo,
    (System_Int32_array **)margeItemInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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

  if ( (byte_418B6BE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    sub_B2C35C(&StringLiteral_10338/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, v4);
    byte_418B6BE = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0LL);
  if ( System_String__IsNullOrEmpty(EventUpString, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v9 = this->fields.margeItemInfo;
  if ( !v9 )
    sub_B2C434(0LL, v7);
  ColorString = EventMargeItemUpValInfo__GetColorString(v9, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10338/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0LL);
  return System_String__Concat_44307816(ColorString, EventUpString, v11, 0LL);
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

  if ( (byte_418B6BD & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10340/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v3);
    sub_B2C35C(&StringLiteral_10342/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    sub_B2C35C(&StringLiteral_10334/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v6);
    byte_418B6BD = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v7 = (System_String_o **)&StringLiteral_10340/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v7 = (System_String_o **)&StringLiteral_10334/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
    v8 = *v7;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
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
        ColorString = System_String__Concat_44305532(v14, NameTitleString, 0LL),
        !this->fields.margeItemInfo)
    || (v16 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo)
    || (v17 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo) )
  {
    sub_B2C434(ColorString, v13);
  }
  v18 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0LL);
  v20 = System_String__Format_44306596(v16, v17, v18, TargetString, 0LL);
  displayValueType = this->fields.displayValueType;
  v22 = v20;
  if ( displayValueType )
    return v22;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0LL);
  return System_String__Concat_44305532(v22, v23, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0LL;
}