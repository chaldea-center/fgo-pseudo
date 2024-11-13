// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoListViewItem___ctor(
        ItemLinkInfoListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  void *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  void *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B181EA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&index, method);
    byte_4B181EA = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  v5 = StringLiteral_1/*""*/;
  this->fields._IconName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IconName_k__BackingField,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Name_k__BackingField,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._ItemEnt_k__BackingField = 0LL;
  *(_QWORD *)&this->fields._TargetId_k__BackingField = 0LL;
  this->fields._ItemDropEfficiencyPriority_k__BackingField = 0;
  *(int32_t *)((char *)&this->fields._ItemDropEfficiencyPriority_k__BackingField + 3) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._ItemEnt_k__BackingField, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields._ItemNeedNum_k__BackingField = 0;
  this->fields._IsItemGetInfoList_k__BackingField = 0;
  v25 = StringLiteral_1/*""*/;
  this->fields._ClosedMessage_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ClosedMessage_k__BackingField,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields._Type_k__BackingField = 0;
  this->fields._LinkAction_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._LinkAction_k__BackingField,
    0LL,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields._IsFirst_k__BackingField = 0;
  v38 = StringLiteral_1/*""*/;
  this->fields._TransitionParam_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TransitionParam_k__BackingField,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


System_String_o *__fastcall ItemLinkInfoListViewItem__get_ClosedMessage(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedMessage_k__BackingField;
}


System_String_o *__fastcall ItemLinkInfoListViewItem__get_IconName(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconName_k__BackingField;
}


bool __fastcall ItemLinkInfoListViewItem__get_IsFirst(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsFirst_k__BackingField;
}


bool __fastcall ItemLinkInfoListViewItem__get_IsItemGetInfoList(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsItemGetInfoList_k__BackingField;
}


bool __fastcall ItemLinkInfoListViewItem__get_IsLocked(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLocked_k__BackingField;
}


bool __fastcall ItemLinkInfoListViewItem__get_IsNotDisplayQuestInfo(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotDisplayQuestInfo_k__BackingField;
}


bool __fastcall ItemLinkInfoListViewItem__get_IsRecommend(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRecommend_k__BackingField;
}


int32_t __fastcall ItemLinkInfoListViewItem__get_ItemDropEfficiencyPriority(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemDropEfficiencyPriority_k__BackingField;
}


ItemEntity_o *__fastcall ItemLinkInfoListViewItem__get_ItemEnt(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemEnt_k__BackingField;
}


int32_t __fastcall ItemLinkInfoListViewItem__get_ItemId(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8

  ItemEnt_k__BackingField = this->fields._ItemEnt_k__BackingField;
  if ( ItemEnt_k__BackingField )
    return ItemEnt_k__BackingField->fields.id;
  else
    return 0;
}


int32_t __fastcall ItemLinkInfoListViewItem__get_ItemNeedNum(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemNeedNum_k__BackingField;
}


System_Action_o *__fastcall ItemLinkInfoListViewItem__get_LinkAction(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._LinkAction_k__BackingField;
}


System_String_o *__fastcall ItemLinkInfoListViewItem__get_Name(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall ItemLinkInfoListViewItem__get_TargetId(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


int32_t __fastcall ItemLinkInfoListViewItem__get_TargetValueType(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetValueType_k__BackingField;
}


System_String_o *__fastcall ItemLinkInfoListViewItem__get_TransitionParam(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionParam_k__BackingField;
}


int32_t __fastcall ItemLinkInfoListViewItem__get_Type(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Type_k__BackingField;
}


void __fastcall ItemLinkInfoListViewItem__set_ClosedMessage(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ClosedMessage_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ClosedMessage_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ItemLinkInfoListViewItem__set_IconName(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IconName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IconName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ItemLinkInfoListViewItem__set_IsFirst(
        ItemLinkInfoListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFirst_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_IsItemGetInfoList(
        ItemLinkInfoListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsItemGetInfoList_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_IsLocked(
        ItemLinkInfoListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLocked_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_IsNotDisplayQuestInfo(
        ItemLinkInfoListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotDisplayQuestInfo_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_IsRecommend(
        ItemLinkInfoListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRecommend_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_ItemDropEfficiencyPriority(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemDropEfficiencyPriority_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_ItemEnt(
        ItemLinkInfoListViewItem_o *this,
        ItemEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ItemEnt_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ItemEnt_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ItemLinkInfoListViewItem__set_ItemNeedNum(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemNeedNum_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_LinkAction(
        ItemLinkInfoListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._LinkAction_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._LinkAction_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ItemLinkInfoListViewItem__set_Name(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Name_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ItemLinkInfoListViewItem__set_TargetId(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_TargetValueType(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetValueType_k__BackingField = value;
}


void __fastcall ItemLinkInfoListViewItem__set_TransitionParam(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TransitionParam_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TransitionParam_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ItemLinkInfoListViewItem__set_Type(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}