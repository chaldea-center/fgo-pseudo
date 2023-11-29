void __fastcall SelectedUserSvtCoin___ctor(
        SelectedUserSvtCoin_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct ListViewItem_o *linkItem; // x22
  __int64 v14; // x9
  SelectedUserSvtCoin_Fields *p_fields; // x20

  if ( (byte_40F93C0 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, iconObject);
    byte_40F93C0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !iconObject )
LABEL_9:
    sub_B170D4();
  linkItem = iconObject->fields.linkItem;
  if ( !linkItem )
  {
    this->fields.iconObject = iconObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)iconObject,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    sub_B170D4();
  }
  v14 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    sub_B173C8(iconObject->fields.linkItem);
    goto LABEL_9;
  }
  this->fields.iconObject = iconObject;
  p_fields = &this->fields;
  sub_B16F98((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)iconObject, v7, v8, v9, v10, v11, v12);
  p_fields->_itemId_k__BackingField = HIDWORD(linkItem[1].klass);
  p_fields->_num_k__BackingField = num;
}


bool __fastcall SelectedUserSvtCoin__get_isConfirm(SelectedUserSvtCoin_o *this, const MethodInfo *method)
{
  return this->fields._isConfirm_k__BackingField;
}


int32_t __fastcall SelectedUserSvtCoin__get_itemId(SelectedUserSvtCoin_o *this, const MethodInfo *method)
{
  return this->fields._itemId_k__BackingField;
}


int32_t __fastcall SelectedUserSvtCoin__get_num(SelectedUserSvtCoin_o *this, const MethodInfo *method)
{
  return this->fields._num_k__BackingField;
}


void __fastcall SelectedUserSvtCoin__set_isConfirm(SelectedUserSvtCoin_o *this, bool value, const MethodInfo *method)
{
  this->fields._isConfirm_k__BackingField = value;
}


void __fastcall SelectedUserSvtCoin__set_itemId(SelectedUserSvtCoin_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._itemId_k__BackingField = value;
}


void __fastcall SelectedUserSvtCoin__set_num(SelectedUserSvtCoin_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._num_k__BackingField = value;
}