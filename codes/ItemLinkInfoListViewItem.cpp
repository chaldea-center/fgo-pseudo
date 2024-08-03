// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoListViewItem___ctor(
        ItemLinkInfoListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Action_o **p_LinkAction_k__BackingField; // x19
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FE616 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, *(_QWORD *)&index);
    byte_49FE616 = 1;
  }
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  v5 = (int)StringLiteral_1/*""*/;
  this->fields._IconName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._IconName_k__BackingField, v5, v6, v7);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Name_k__BackingField, v8, v9, v10);
  this->fields._ItemDropEfficiencyPriority_k__BackingField = 0;
  *(_WORD *)&this->fields._IsLocked_k__BackingField = 0;
  this->fields._ItemEnt_k__BackingField = 0LL;
  *(_QWORD *)&this->fields._TargetId_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ItemEnt_k__BackingField, 0, v11, v12);
  this->fields._ItemNeedNum_k__BackingField = 0;
  this->fields._IsItemGetInfoList_k__BackingField = 0;
  v13 = (int)StringLiteral_1/*""*/;
  this->fields._ClosedMessage_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ClosedMessage_k__BackingField, v13, v14, v15);
  this->fields._LinkAction_k__BackingField = 0LL;
  p_LinkAction_k__BackingField = &this->fields._LinkAction_k__BackingField;
  *((_DWORD *)p_LinkAction_k__BackingField + 2) = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_LinkAction_k__BackingField, 0, v17, v18);
  *((_BYTE *)p_LinkAction_k__BackingField + 12) = 0;
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

  this->fields._ClosedMessage_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ItemLinkInfoListViewItem__set_IconName(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._IconName_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._IconName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._ItemEnt_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ItemEnt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._LinkAction_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._LinkAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ItemLinkInfoListViewItem__set_Name(
        ItemLinkInfoListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Name_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall ItemLinkInfoListViewItem__set_Type(
        ItemLinkInfoListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}