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
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.titleName = titleName;
  sub_B70630(
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


void __fastcall PartyOrganizationEventPointListViewItem___ctor_30901640(
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
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.margeItemInfo = margeItemInfo;
  sub_B70630(
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
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *EventUpString; // x19
  __int64 v5; // x1
  EventMargeItemUpValInfo_o *v7; // x0
  System_String_o *ColorString; // x20
  System_String_o *v9; // x2

  if ( (byte_4354D44 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_10463/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/);
    byte_4354D44 = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0LL);
  if ( System_String__IsNullOrEmpty(EventUpString, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v7 = this->fields.margeItemInfo;
  if ( !v7 )
    sub_B7076C(0LL, v5);
  ColorString = EventMargeItemUpValInfo__GetColorString(v7, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10463/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0LL);
  return System_String__Concat_44760452(ColorString, EventUpString, v9, 0LL);
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

  if ( (byte_4354D43 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10465/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_B70694(&StringLiteral_10467/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_10459/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_4354D43 = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v3 = (System_String_o **)&StringLiteral_10465/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v3 = (System_String_o **)&StringLiteral_10459/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
    v4 = *v3;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get(v4, 0LL);
    return System_String__Format(v5, (Il2CppObject *)this->fields.titleName, 0LL);
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  ColorString = EventMargeItemUpValInfo__GetColorString(margeItemInfo, 0LL);
  if ( !this->fields.margeItemInfo
    || (v10 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0LL),
        ColorString = System_String__Concat_44758168(v10, NameTitleString, 0LL),
        !this->fields.margeItemInfo)
    || (v12 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo)
    || (v13 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo) )
  {
    sub_B7076C(ColorString, v9);
  }
  v14 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0LL);
  v16 = System_String__Format_44759232(v12, v13, v14, TargetString, 0LL);
  displayValueType = this->fields.displayValueType;
  v18 = v16;
  if ( displayValueType )
    return v18;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0LL);
  return System_String__Concat_44758168(v18, v19, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0LL;
}