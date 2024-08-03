void __fastcall SelectedUserSvtCoin___ctor(
        SelectedUserSvtCoin_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct ListViewItem_o *linkItem; // x22
  __int64 methodPtr_low; // x9
  SelectedUserSvtCoin_Fields *p_fields; // x20
  __int64 v13; // x0

  if ( (byte_49FF8E2 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomCoinIconItem_TypeInfo, iconObject);
    byte_49FF8E2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !iconObject )
LABEL_9:
    sub_1B64324(v7);
  linkItem = iconObject->fields.linkItem;
  if ( !linkItem )
  {
    this->fields.iconObject = iconObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)iconObject, v8, v9);
    sub_1B64324(v13);
  }
  methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
  {
    sub_1B645E4(iconObject->fields.linkItem);
    goto LABEL_9;
  }
  this->fields.iconObject = iconObject;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)iconObject, v8, v9);
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