void __fastcall SelectedUserSvtCoin___ctor(
        SelectedUserSvtCoin_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct ListViewItem_o *linkItem; // x22
  __int64 v16; // x9
  SelectedUserSvtCoin_Fields *p_fields; // x20
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4187B2F & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, iconObject);
    byte_4187B2F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !iconObject )
LABEL_9:
    sub_B2C434(v7, v8);
  linkItem = iconObject->fields.linkItem;
  if ( !linkItem )
  {
    this->fields.iconObject = iconObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)iconObject,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    sub_B2C434(v18, v19);
  }
  v16 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    v7 = sub_B2C728(iconObject->fields.linkItem);
    goto LABEL_9;
  }
  this->fields.iconObject = iconObject;
  p_fields = &this->fields;
  sub_B2C2F8((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)iconObject, v9, v10, v11, v12, v13, v14);
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