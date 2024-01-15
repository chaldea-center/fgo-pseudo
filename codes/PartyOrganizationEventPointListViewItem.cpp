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
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.titleName = titleName;
  sub_B16F98(
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


void __fastcall PartyOrganizationEventPointListViewItem___ctor_32285712(
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
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.margeItemInfo = margeItemInfo;
  sub_B16F98(
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
  EventMargeItemUpValInfo_o *v8; // x0
  System_String_o *ColorString; // x20
  System_String_o *v10; // x2

  if ( (byte_40FDC5B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    sub_B16FFC(&StringLiteral_10305/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, v4);
    byte_40FDC5B = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0LL);
  if ( System_String__IsNullOrEmpty(EventUpString, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = this->fields.margeItemInfo;
  if ( !v8 )
    sub_B170D4();
  ColorString = EventMargeItemUpValInfo__GetColorString(v8, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10305/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0LL);
  return System_String__Concat_43746016(ColorString, EventUpString, v10, 0LL);
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
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  System_String_o *ItemName; // x0
  Il2CppObject *v18; // x21
  System_String_o *ServantName; // x0
  Il2CppObject *v20; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v22; // x0
  int32_t displayValueType; // w8
  System_String_o *v24; // x19
  System_String_o *v25; // x1

  if ( (byte_40FDC5A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10307/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v3);
    sub_B16FFC(&StringLiteral_10309/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    sub_B16FFC(&StringLiteral_10301/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v6);
    byte_40FDC5A = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v7 = (System_String_o **)&StringLiteral_10307/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v7 = (System_String_o **)&StringLiteral_10301/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
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
    || (v13 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0LL),
        v15 = System_String__Concat_43743732(v13, NameTitleString, 0LL),
        !this->fields.margeItemInfo)
    || (v16 = v15,
        ItemName = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo)
    || (v18 = (Il2CppObject *)ItemName,
        ServantName = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo) )
  {
    sub_B170D4();
  }
  v20 = (Il2CppObject *)ServantName;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0LL);
  v22 = System_String__Format_43744796(v16, v18, v20, TargetString, 0LL);
  displayValueType = this->fields.displayValueType;
  v24 = v22;
  if ( displayValueType )
    return v24;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10309/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0LL);
  return System_String__Concat_43743732(v24, v25, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0LL;
}