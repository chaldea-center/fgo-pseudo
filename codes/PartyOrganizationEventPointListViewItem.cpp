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
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.titleName = titleName;
  sub_B5D560(
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


void __fastcall PartyOrganizationEventPointListViewItem___ctor_29732284(
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
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.margeItemInfo = margeItemInfo;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *EventUpString; // x19
  __int64 v13; // x1
  EventMargeItemUpValInfo_o *v15; // x0
  System_String_o *ColorString; // x20
  System_String_o *v17; // x2

  if ( (byte_42EB095 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10444/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, v8, v9, v10);
    byte_42EB095 = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 0LL);
  if ( System_String__IsNullOrEmpty(EventUpString, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = this->fields.margeItemInfo;
  if ( !v15 )
    sub_B5D69C(0LL, v13);
  ColorString = EventMargeItemUpValInfo__GetColorString(v15, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10444/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0LL);
  return System_String__Concat_44580072(ColorString, EventUpString, v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o **v17; // x8
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *ColorString; // x0
  __int64 v23; // x1
  System_String_o *v24; // x20
  System_String_o *NameTitleString; // x0
  System_String_o *v26; // x20
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v30; // x0
  int32_t displayValueType; // w8
  System_String_o *v32; // x19
  System_String_o *v33; // x1

  if ( (byte_42EB094 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10446/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10448/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10440/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v14, v15, v16);
    byte_42EB094 = 1;
  }
  if ( this->fields.titleName )
  {
    if ( this->fields.isFollower )
      v17 = (System_String_o **)&StringLiteral_10446/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    else
      v17 = (System_String_o **)&StringLiteral_10440/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
    v18 = *v17;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get(v18, 0LL);
    return System_String__Format(v19, (Il2CppObject *)this->fields.titleName, 0LL);
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  ColorString = EventMargeItemUpValInfo__GetColorString(margeItemInfo, 0LL);
  if ( !this->fields.margeItemInfo
    || (v24 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0LL),
        ColorString = System_String__Concat_44577788(v24, NameTitleString, 0LL),
        !this->fields.margeItemInfo)
    || (v26 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo)
    || (v27 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0LL),
        !this->fields.margeItemInfo) )
  {
    sub_B5D69C(ColorString, v23);
  }
  v28 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0LL);
  v30 = System_String__Format_44578852(v26, v27, v28, TargetString, 0LL);
  displayValueType = this->fields.displayValueType;
  v32 = v30;
  if ( displayValueType )
    return v32;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10448/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0LL);
  return System_String__Concat_44577788(v32, v33, 0LL);
}


bool __fastcall PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0LL;
}