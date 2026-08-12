void ItemLinkInfoListViewItem___ctor(ItemLinkInfoListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  int32_t v5; // w1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_String_o *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_59730C1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59730C1 = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v5 = (int)StringLiteral_1/*""*/;
  this->fields._IconName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._IconName_k__BackingField, v5, v6, v7, v8, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_QWORD *)&this->fields._TargetId_k__BackingField = 0;
  this->fields._ItemEnt_k__BackingField = 0;
  this->fields._ItemDropEfficiencyPriority_k__BackingField = 0;
  *(int32_t *)((char *)&this->fields._ItemDropEfficiencyPriority_k__BackingField + 3) = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemEnt_k__BackingField,
    0,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._ItemNeedNum_k__BackingField = 0;
  this->fields._IsItemGetInfoList_k__BackingField = 0;
  this->fields._ClosedMessage_k__BackingField = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields._Type_k__BackingField = 0;
  this->fields._LinkAction_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LinkAction_k__BackingField,
    0,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (int)StringLiteral_1/*""*/;
  this->fields._TransitionParam_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._IsFirst_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransitionParam_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ClosedMessage_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._IconName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ItemEnt_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemEnt_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._LinkAction_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LinkAction_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Name_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TransitionParam_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransitionParam_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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