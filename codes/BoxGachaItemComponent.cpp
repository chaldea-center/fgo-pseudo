void BoxGachaItemComponent___ctor(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoxGachaItemComponent__Clear(BoxGachaItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( (byte_4C3D3A2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D3A2 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0), (itemIcon = (ItemIconComponent_o *)this->fields.dataLabel) == 0) )
  {
    sub_1C372B4(itemIcon);
  }
  UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemComponent__Set(
        BoxGachaItemComponent_o *this,
        int32_t itemId,
        int32_t payNum,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0
  UILabel_o *dataLabel; // x20

  if ( (byte_4C3D3A3 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3D3A3 = 1;
  }
  if ( itemId < 1 )
  {
    BoxGachaItemComponent__Clear(this, *(const MethodInfo **)&itemId);
  }
  else
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_10;
    ItemIconComponent__SetItem(itemIcon, itemId, -1, 1, 0);
    dataLabel = this->fields.dataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemIcon = (ItemIconComponent_o *)LocalizationManager__GetNumberFormat(payNum, 0);
    if ( !dataLabel )
LABEL_10:
      sub_1C372B4(itemIcon);
    UILabel__set_text(dataLabel, (System_String_o *)itemIcon, 0);
  }
}