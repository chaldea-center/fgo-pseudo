void __fastcall SelectedUserSvtCoin___ctor(
        SelectedUserSvtCoin_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ListViewItem_o *linkItem; // x22
  __int64 v15; // x9
  SelectedUserSvtCoin_Fields *p_fields; // x20
  __int64 v17; // x0

  if ( (byte_4215821 & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomCoinIconItem_TypeInfo, iconObject);
    byte_4215821 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !iconObject )
LABEL_9:
    sub_B0D97C(v7);
  linkItem = iconObject->fields.linkItem;
  if ( !linkItem )
  {
    this->fields.iconObject = iconObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)iconObject,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    sub_B0D97C(v17);
  }
  v15 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v15 - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    v7 = sub_B0DC70(iconObject->fields.linkItem);
    goto LABEL_9;
  }
  this->fields.iconObject = iconObject;
  p_fields = &this->fields;
  sub_B0D840((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)iconObject, v8, v9, v10, v11, v12, v13);
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