void ItemLinkInfoListViewItem___ctor(ItemLinkInfoListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CF0ED5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF0ED5 = 1;
  }
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  v5 = StringLiteral_1/*""*/;
  this->fields._IconName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._IconName_k__BackingField, v5, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField, v12, v13, v14, v15, v16, v17, v18);
  this->fields._ItemEnt_k__BackingField = 0;
  *(_QWORD *)&this->fields._TargetId_k__BackingField = 0;
  this->fields._ItemDropEfficiencyPriority_k__BackingField = 0;
  *(int32_t *)((char *)&this->fields._ItemDropEfficiencyPriority_k__BackingField + 3) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._ItemEnt_k__BackingField, 0, v19, v20, v21, v22, v23, v24);
  this->fields._ItemNeedNum_k__BackingField = 0;
  this->fields._IsItemGetInfoList_k__BackingField = 0;
  v25 = StringLiteral_1/*""*/;
  this->fields._ClosedMessage_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields._Type_k__BackingField = 0;
  this->fields._LinkAction_k__BackingField = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._LinkAction_k__BackingField, 0, v32, v33, v34, v35, v36, v37);
  this->fields._IsFirst_k__BackingField = 0;
  v38 = StringLiteral_1/*""*/;
  this->fields._TransitionParam_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransitionParam_k__BackingField,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


System_String_o *ItemLinkInfoListViewItem__get_ClosedMessage(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedMessage_k__BackingField;
}


System_String_o *ItemLinkInfoListViewItem__get_IconName(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IconName_k__BackingField;
}


bool ItemLinkInfoListViewItem__get_IsFirst(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsFirst_k__BackingField;
}


bool ItemLinkInfoListViewItem__get_IsItemGetInfoList(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsItemGetInfoList_k__BackingField;
}


bool ItemLinkInfoListViewItem__get_IsLocked(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLocked_k__BackingField;
}


bool ItemLinkInfoListViewItem__get_IsNotDisplayQuestInfo(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsNotDisplayQuestInfo_k__BackingField;
}


bool ItemLinkInfoListViewItem__get_IsRecommend(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRecommend_k__BackingField;
}


int32_t ItemLinkInfoListViewItem__get_ItemDropEfficiencyPriority(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemDropEfficiencyPriority_k__BackingField;
}


ItemEntity_o *ItemLinkInfoListViewItem__get_ItemEnt(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ItemEnt_k__BackingField;
}


int32_t ItemLinkInfoListViewItem__get_ItemId(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8

  ItemEnt_k__BackingField = this->fields._ItemEnt_k__BackingField;
  if ( ItemEnt_k__BackingField )
    return ItemEnt_k__BackingField->fields.id;
  else
    return 0;
}


int32_t ItemLinkInfoListViewItem__get_ItemNeedNum(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ItemNeedNum_k__BackingField;
}


System_Action_o *ItemLinkInfoListViewItem__get_LinkAction(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._LinkAction_k__BackingField;
}


System_String_o *ItemLinkInfoListViewItem__get_Name(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t ItemLinkInfoListViewItem__get_TargetId(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


int32_t ItemLinkInfoListViewItem__get_TargetValueType(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TargetValueType_k__BackingField;
}


System_String_o *ItemLinkInfoListViewItem__get_TransitionParam(
        ItemLinkInfoListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionParam_k__BackingField;
}


int32_t ItemLinkInfoListViewItem__get_Type(ItemLinkInfoListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._Type_k__BackingField;
}


void ItemLinkInfoListViewItem__set_ClosedMessage(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClosedMessage_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemLinkInfoListViewItem__set_IconName(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._IconName_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemLinkInfoListViewItem__set_IsFirst(ItemLinkInfoListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsFirst_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_IsItemGetInfoList(
        ItemLinkInfoListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsItemGetInfoList_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_IsLocked(ItemLinkInfoListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsLocked_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_IsNotDisplayQuestInfo(
        ItemLinkInfoListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotDisplayQuestInfo_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_IsRecommend(ItemLinkInfoListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsRecommend_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_ItemDropEfficiencyPriority(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemDropEfficiencyPriority_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_ItemEnt(
        ItemLinkInfoListViewItem_o *this,
        ItemEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ItemEnt_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ItemEnt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemLinkInfoListViewItem__set_ItemNeedNum(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemNeedNum_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_LinkAction(
        ItemLinkInfoListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._LinkAction_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._LinkAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemLinkInfoListViewItem__set_Name(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemLinkInfoListViewItem__set_TargetId(ItemLinkInfoListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_TargetValueType(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetValueType_k__BackingField = value;
}


void ItemLinkInfoListViewItem__set_TransitionParam(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._TransitionParam_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransitionParam_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemLinkInfoListViewItem__set_Type(ItemLinkInfoListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}