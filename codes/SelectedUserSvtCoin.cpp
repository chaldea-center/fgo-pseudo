void SelectedUserSvtCoin___ctor(
        SelectedUserSvtCoin_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct ListViewItem_o *linkItem; // x22
  __int64 naturalAligment; // x9
  SelectedUserSvtCoin_Fields *p_fields; // x20
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4D30646 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    byte_4D30646 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !iconObject )
LABEL_9:
    sub_1C942F0(v7, v8);
  linkItem = iconObject->fields.linkItem;
  if ( !linkItem )
  {
    this->fields.iconObject = iconObject;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)iconObject, v9, v10, v11, v12, v13, v14);
    sub_1C942F0(v18, v19);
  }
  naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    sub_1C9468C(iconObject->fields.linkItem);
    goto LABEL_9;
  }
  this->fields.iconObject = iconObject;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)iconObject, v9, v10, v11, v12, v13, v14);
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