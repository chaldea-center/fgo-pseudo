void SelectedUserSvtCoin___ctor(
        SelectedUserSvtCoin_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct ListViewItem_o *linkItem; // x22
  __int64 naturalAligment; // x9
  SelectedUserSvtCoin_Fields *p_fields; // x20
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_593C5F0 & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomCoinIconItem_TypeInfo);
    byte_593C5F0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !iconObject )
LABEL_9:
    sub_21FFECC(v7, v8);
  linkItem = iconObject->fields.linkItem;
  if ( !linkItem )
  {
    this->fields.iconObject = iconObject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)iconObject, v9, v10, v11, v12, v13, v14);
    sub_21FFECC(v18, v19);
  }
  naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    sub_220024C(iconObject->fields.linkItem, CoinRoomCoinIconItem_TypeInfo, v9);
    goto LABEL_9;
  }
  this->fields.iconObject = iconObject;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)iconObject, v9, v10, v11, v12, v13, v14);
  p_fields->_itemId_k__BackingField = HIDWORD(linkItem[1].klass);
  p_fields->_num_k__BackingField = num;
}


bool SelectedUserSvtCoin__get_isConfirm(SelectedUserSvtCoin_o *this, const MethodInfo *method)
{
  return this->fields._isConfirm_k__BackingField;
}


int32_t SelectedUserSvtCoin__get_itemId(SelectedUserSvtCoin_o *this, const MethodInfo *method)
{
  return this->fields._itemId_k__BackingField;
}


int32_t SelectedUserSvtCoin__get_num(SelectedUserSvtCoin_o *this, const MethodInfo *method)
{
  return this->fields._num_k__BackingField;
}


void SelectedUserSvtCoin__set_isConfirm(SelectedUserSvtCoin_o *this, bool value, const MethodInfo *method)
{
  this->fields._isConfirm_k__BackingField = value;
}


void SelectedUserSvtCoin__set_itemId(SelectedUserSvtCoin_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._itemId_k__BackingField = value;
}


void SelectedUserSvtCoin__set_num(SelectedUserSvtCoin_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._num_k__BackingField = value;
}