void PartyOrganizationEventPointListViewItem___ctor(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        System_String_o *titleName,
        bool isFollower,
        int32_t displayValueType,
        const MethodInfo *method)
{
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.displayValueType = 1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.titleName = titleName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleName,
    (int32_t)titleName,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.isFollower = isFollower;
  this->fields.displayValueType = displayValueType;
}


void PartyOrganizationEventPointListViewItem___ctor_40946544(
        PartyOrganizationEventPointListViewItem_o *this,
        int32_t index,
        EventMargeItemUpValInfo_o *margeItemInfo,
        int32_t displayValueType,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  this->fields.displayValueType = 1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.margeItemInfo = margeItemInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.margeItemInfo,
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *ColorString; // x20
  System_String_o *v11; // x2

  if ( (byte_596BFDC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10642/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/);
    byte_596BFDC = 1;
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(margeItemInfo, 1, 0);
  if ( System_String__IsNullOrEmpty(EventUpString, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v7 = this->fields.margeItemInfo;
  if ( !v7 )
    sub_2213CDC(0, v5);
  ColorString = EventMargeItemUpValInfo__GetColorString(v7, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10642/*"PARTY_ORGANIZATION_EVENT_MEMBER_OFFSET"*/, 0);
  return System_String__Concat_75694928(ColorString, EventUpString, v11, 0);
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
  __int64 v2; // x2
  System_String_o **v4; // x8
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  EventMargeItemUpValInfo_o *margeItemInfo; // x0
  System_String_o *ColorString; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *NameTitleString; // x0
  System_String_o *v13; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x22
  Il2CppObject *TargetString; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t displayValueType; // w8
  System_String_o *v21; // x19
  System_String_o *v22; // x1

  if ( (byte_596BFDB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10644/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_2213A60(&StringLiteral_10646/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10637/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_596BFDB = 1;
  }
  if ( this->fields.titleName )
  {
    v4 = (System_String_o **)&StringLiteral_10637/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
    if ( this->fields.isFollower )
      v4 = (System_String_o **)&StringLiteral_10644/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
    v5 = *v4;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v6 = LocalizationManager__Get(v5, 0);
    return System_String__Format(v6, (Il2CppObject *)this->fields.titleName, 0);
  }
  margeItemInfo = this->fields.margeItemInfo;
  if ( !margeItemInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  ColorString = EventMargeItemUpValInfo__GetColorString(margeItemInfo, 0);
  if ( !this->fields.margeItemInfo
    || (v11 = ColorString,
        NameTitleString = EventMargeItemUpValInfo__GetNameTitleString(this->fields.margeItemInfo, 0),
        ColorString = System_String__Concat_75651716(v11, NameTitleString, 0),
        !this->fields.margeItemInfo)
    || (v13 = ColorString,
        ColorString = EventMargeItemUpValInfo__GetItemName(this->fields.margeItemInfo, 0),
        !this->fields.margeItemInfo)
    || (v14 = (Il2CppObject *)ColorString,
        ColorString = EventMargeItemUpValInfo__GetServantName(this->fields.margeItemInfo, 0),
        !this->fields.margeItemInfo) )
  {
    sub_2213CDC(ColorString, v10);
  }
  v15 = (Il2CppObject *)ColorString;
  TargetString = (Il2CppObject *)EventMargeItemUpValInfo__GetTargetString(this->fields.margeItemInfo, 0);
  v17 = System_String__Format_75697948(v13, v14, v15, TargetString, 0);
  displayValueType = this->fields.displayValueType;
  v21 = v17;
  if ( displayValueType )
    return v21;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10646/*"PARTY_ORGANIZATION_EVENT_PARTY_SUM"*/, 0);
  return System_String__Concat_75651716(v21, v22, 0);
}


bool PartyOrganizationEventPointListViewItem__IsTitle(
        PartyOrganizationEventPointListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.titleName != 0;
}